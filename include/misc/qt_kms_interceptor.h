#ifndef _QT_KMS_INTERCEPTOR_
#define _QT_KMS_INTERCEPTOR_
#include <vector>
#include <set>
#include <map>
#include <QtCore>
#include <QCoreApplication>

#include <xf86drm.h>
#include <xf86drmMode.h>
//#include "qkmsdevice_p.h"
//#define IMPLEMENT_QT_KMS_INTERCEPTOR

//  PUT THIS FILE TO qtbase/src/platformsupport/kmsconvenience
////////////////////////////////////////////////////////////////////////////////////////
/// qtbase/src/platformsupport/kmsconvenience/qkmsdevice.cpp
///
/// 1: define implenent macro and include header
/// #define IMPLEMENT_QT_KMS_INTERCEPTOR
/// #include "qt_kms_interceptor.h"
///
/// 2:in QKmsDevice::discoverPlanes()
/// 2.1: at beginning, set device object
/// QtKmsInterceptor::get_instance()->set_device(this);
/// 2.2: before enumerateProperties in loop, define a z_value, and save z_pos's value from of lambda
/// qint64 z_value = -1;
/// z_value = value;(in lambda function, when get z_pos property)
/// 2.3: after enumerateProperties in loop, push planes to intercepter
/// int32_t crtc_id = 0;
/// drmModeRes *resources = drmModeGetResources(m_dri_fd);
/// for (int index = 0; index < resources->count_crtcs; ++index)
/// {
///     if ((plane.possibleCrtcs & (1 << index))){
///         crtc_id = resources->crtcs[index];
///     }
/// }
/// drmModeFreeResources(resources);
/// QtKmsInterceptor::get_instance()->push_plane(m_planes.back(),crtc_id,z_value);
///
/// 3:at QKmsDevice::createScreenForConnector , before set plane from QT_QPA_EGLFS_KMS_PLANE_INDEX,
/// cache output and select the under-top/top argb8888 plane
/// QtKmsInterceptor::get_instance()->push_output(output);
/// auto select_plane = QtKmsInterceptor::get_instance()->get_plane(crtc_id,DRM_FORMAT_ARGB8888,kPlaneUnderTop);
/// if(select_plane){
///     qWarning("INFO: ############## SELECT TOP ARGB8888 crtc:%d plane:%d",crtc_id ,select_plane->id);
///     assignPlane(&output, select_plane);
/// }

////////////////////////////////////////////////////////////////////////////////////////
/// qtbase/src/plugins/platforms/eglfs/deviceintegration/eglfs_kms/qeglfskmsgbmscreen.cpp
///
/// #include "../../../../../platformsupport/kmsconvenience/qt_kms_interceptor.h"
///
/// at drmFormatToGbmFormat()/gbmFormatToDrmFormat()
/// return DRM_FORMAT_ARGB8888/GBM_FORMAT_ARGB8888
///
/// at QEglFSKmsGbmScreen::flip fire-lip
/// get_global_kms_interceptor_private_interface()->fire_flip(&op,request);//for atomic
/// get_global_kms_interceptor_private_interface()->fire_flip(&op,nullptr);//for classic
///
/// at end of QEglFSKmsGbmScreen::updateFlipStatus fire-flip-finished
/// get_global_kms_interceptor_private_interface()->fire_flip_finished(&m_output);

#define DRM_FORMAT_ANY 0

enum PlaneLayer{
    kPlaneTop,
    kPlaneBottom,
    kPlaneUnderTop,//layer under top if layers >= 3(cant't same as bottom)
    kPlaneAboveBottom//layer above bottom if layers >= 3(cant't same as top)
};

class QKmsDevice;
class QtKmsInterceptorObserver{
public:
    virtual int32_t on_kms_interceptor_flip(QKmsDevice* device, QKmsOutput* output,drmModeAtomicReq* request) = 0;
    virtual int32_t on_kms_interceptor_flip_finished(QKmsDevice* device,QKmsOutput* output) = 0;
};

class QtKmsInterceptorInterface{
public:
    virtual void append_observer(QtKmsInterceptorObserver* observer) = 0;
    virtual void remove_observer(QtKmsInterceptorObserver* observer) = 0;
    virtual QKmsOutput* get_output(int32_t index) = 0;
    virtual QKmsPlane* get_plane(int32_t crtc_id,uint32_t drm_format,PlaneLayer layer,bool ingore_cursor_layer = true) = 0;
    virtual std::multimap<int32_t,QKmsPlane>* get_planes(int32_t crtc_id) = 0;
};
class QtKmsInterceptorPrivateInterface{
public:
    virtual int32_t set_device(QKmsDevice* kms_device) = 0;
    virtual int32_t push_output(const QKmsOutput& output) = 0;
    virtual int32_t push_plane(const QKmsPlane& plane,int32_t crtc,int32_t z) = 0;
    virtual int32_t fire_flip(QKmsOutput *target,drmModeAtomicReq* request) = 0;
    virtual int32_t fire_flip_finished(QKmsOutput *target) = 0;
};

inline QtKmsInterceptorInterface* get_global_kms_interceptor_interface(){
    auto property = QCoreApplication::instance()->property("QT_KMS_INTERCEPTOR_INTERFACE");
    return (QtKmsInterceptorInterface*)property.value<void*>();
}
inline QtKmsInterceptorPrivateInterface* get_global_kms_interceptor_private_interface(){
    auto property = QCoreApplication::instance()->property("QT_KMS_INTERCEPTOR_PRIVATE_INTERFACE");
    return (QtKmsInterceptorPrivateInterface*)property.value<void*>();
}

#ifdef IMPLEMENT_QT_KMS_INTERCEPTOR

class QtKmsInterceptor : public QtKmsInterceptorInterface
                       , public QtKmsInterceptorPrivateInterface
{
public:
    static QtKmsInterceptor* get_instance(){
        if(interceptor_ == nullptr){
            interceptor_ = new QtKmsInterceptor();
            auto interceptor_interface = static_cast<QtKmsInterceptorInterface*>(interceptor_);
            QCoreApplication::instance()->setProperty("QT_KMS_INTERCEPTOR_INTERFACE",
                                                      QVariant::fromValue(QVariant::fromValue(static_cast<void*>(interceptor_interface))));
            auto private_interface = static_cast<QtKmsInterceptorPrivateInterface*>(interceptor_);
            QCoreApplication::instance()->setProperty("QT_KMS_INTERCEPTOR_PRIVATE_INTERFACE",
                                                      QVariant::fromValue(QVariant::fromValue(static_cast<void*>(private_interface))));

            qWarning("##############  QtKmsInterceptor Created [interface:%p] [private interface:%p]",interceptor_interface,private_interface);
        }
        return interceptor_;
    }
    virtual int32_t set_device(QKmsDevice* kms_device){
        kms_device_ = kms_device;
        return 0;
    }
    virtual void append_observer(QtKmsInterceptorObserver* observer){
        observers_.insert(observer);
    }
    virtual void remove_observer(QtKmsInterceptorObserver* observer){
        observers_.erase(observer);
    }

    //cache created outputs
    virtual QKmsOutput* get_output(int32_t index){
        if(index >= (int32_t)outputs_.size())
            return nullptr;
        return &outputs_[index];
    }
    //for qt self, find a top argb8888 to render qt-layer, in QKmsDevice::createScreenForConnector
    //for user, find a bottom NV12(mostly) to render video
    virtual QKmsPlane* get_plane(int32_t crtc_id,uint32_t drm_format,PlaneLayer layer,bool ingore_cursor_layer = true){
        if(crtc_z_planes_.find(crtc_id) == crtc_z_planes_.end()){
            return nullptr;
        }
        QVector<QKmsPlane*> valid_planes;
        auto& z_planes = crtc_z_planes_[crtc_id];
        for(auto it = z_planes.begin();it != z_planes.end();it++){
            if(it->second.type == DRM_PLANE_TYPE_CURSOR && ingore_cursor_layer)
                continue;
            if(drm_format == DRM_FORMAT_ANY)
                valid_planes.push_back(&(it->second));
            else{
                for(auto format : it->second.supportedFormats){
                    if(format == drm_format){
                        valid_planes.push_back(&(it->second));
                        break;
                    }
                }
            }
        }
        if(valid_planes.empty())
            return nullptr;

        if(layer == kPlaneTop)
            return valid_planes.back();
        else if(layer == kPlaneBottom)
            return valid_planes.front();
        else if(layer == kPlaneUnderTop)
            return valid_planes.size() > 2 ? valid_planes[valid_planes.size()-2]: valid_planes.back();
        else if(layer == kPlaneAboveBottom)
            return valid_planes.size() > 2 ? valid_planes[2]: valid_planes.front();

        return nullptr;
    }
    virtual std::multimap<int32_t,QKmsPlane>* get_planes(int32_t crtc_id){
        if(crtc_z_planes_.find(crtc_id) == crtc_z_planes_.end()){
            return nullptr;
        }
        return &crtc_z_planes_[crtc_id];
    }

    //cache opened screen(crtc)
    virtual int32_t push_output(const QKmsOutput& output){
        for(auto& item : outputs_){
            if(item.crtc_id == output.crtc_id)
                return 1;
        }
        outputs_.push_back(output);
        return 0;
    }

    //cache planes, in QKmsDevice::discoverPlanes()
    virtual int32_t push_plane(const QKmsPlane& plane,int32_t crtc,int32_t z){
        if(z == -1){
            if(plane.type == DRM_PLANE_TYPE_PRIMARY)
                z = 0;
            else if(plane.type == DRM_PLANE_TYPE_OVERLAY)
                z = 1;
            else if(plane.type == DRM_PLANE_TYPE_CURSOR)
                z = 2;
        }
        if(crtc_z_planes_.find(crtc) == crtc_z_planes_.end()){
            crtc_z_planes_[crtc] = std::multimap<int32_t,QKmsPlane>();
        }
        crtc_z_planes_[crtc].insert(std::pair<int32_t,QKmsPlane>(z,plane));
        return 0;
    }

    virtual int32_t dump(){
        for(const auto& z_planes : crtc_z_planes_){
            qWarning("INFO: ##############get planes of crtc_id:%d",z_planes.first);
            for(const auto& plane : z_planes.second){
                std::string formats_str;
                auto foramts = plane.second.supportedFormats;
                int32_t count = foramts.size();
                for(int32_t index = 0; index < count; index++){
                    formats_str += (fourcc_to_string(foramts[index]) + " ");
                }
                qWarning("INFO: ##############  z:%d plane_id:%d formats:%s",plane.first,plane.second.id,formats_str.c_str());
            }
        }
        return 0;
    }

    virtual int32_t fire_flip(QKmsOutput *target,drmModeAtomicReq* request){
        for(auto observer : observers_){
            observer->on_kms_interceptor_flip(kms_device_,target,request);
        }
        return 0;
    }
    virtual int32_t fire_flip_finished(QKmsOutput *target){
        for(auto observer : observers_){
            observer->on_kms_interceptor_flip_finished(kms_device_,target);
        }
        return 0;
    }
    std::string fourcc_to_string(uint32_t fourcc)
    {
        std::string v;
        for(uint32_t i=0; i<4; i++)
        {
            v += static_cast<char>(fourcc & 0xFF);
            fourcc >>= 8;
        }
        return v;
    };
private:
    static QtKmsInterceptor* interceptor_;

    QKmsDevice* kms_device_ = nullptr;
    std::set<QtKmsInterceptorObserver*> observers_;
    //planes of crtc -> z -> plane
    std::map<int32_t,std::multimap<int32_t,QKmsPlane>> crtc_z_planes_;
    //all opend output(crtc)
    std::vector<QKmsOutput> outputs_;
};
QtKmsInterceptor* QtKmsInterceptor::interceptor_ = nullptr;

#endif

#endif
