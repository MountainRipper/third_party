#ifndef IMGUI_HELPER_H
#define IMGUI_HELPER_H
#include <functional>
#include <vector>
#include <string>
#include <map>
#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui/imgui.h>
namespace mr
{

struct ImguiFontResource
{
    std::string ttf_file_path;
    const char* ttf_base85 = nullptr;
    void* ttf_binary_data = nullptr;
    uint32_t ttf_binary_size = 0;
    bool ttf_binary_compressed = false;
    float scale = 1.0;
    const ImWchar* range = nullptr;
    ImFontConfig config;
};
class ImGuiHelper{
public:
    static bool& pushed(){
        static bool s_pushed = false;
        return s_pushed;
    }
    static ImGuiHelper& get(const std::string& name = "defualt-font"){
        static std::map<std::string,ImGuiHelper> helpers;
        if(helpers.find(name) == helpers.end())
            helpers[name] = ImGuiHelper();
        return helpers[name];
    }
    void create_default_font(int32_t size,std::vector<ImguiFontResource> fonts){
        ImGuiIO& io = ImGui::GetIO();
        bool first = true;
        for(auto& item : fonts){
            item.config.MergeMode = !first;
            first = false;
            float font_size = size*item.scale;
            ImFont* font = nullptr;
            if(item.ttf_file_path.size()){
                font = io.Fonts->AddFontFromFileTTF(item.ttf_file_path.c_str(),font_size,&item.config,item.range);
            }
            else if(item.ttf_base85){
                font = io.Fonts->AddFontFromMemoryCompressedBase85TTF(item.ttf_base85,font_size,&item.config,item.range);
            }
            else if(item.ttf_binary_data){
                if(item.ttf_binary_compressed)
                    font = io.Fonts->AddFontFromMemoryCompressedTTF(item.ttf_binary_data,item.ttf_binary_size,font_size,&item.config,item.range);
                else
                    font = io.Fonts->AddFontFromMemoryTTF(item.ttf_binary_data,item.ttf_binary_size,font_size,&item.config,item.range);
            }
            if(!font_ && font){
                font_ = font;
                origin_size_ = font_size;
                if(font_->FontSize == 0){
                    //load will not set FontSize?
                    font_->FontSize = origin_size_;
                }
            }
        }
    }

    void build(){
        ImGuiIO& io = ImGui::GetIO();
        io.Fonts->Build();
    }

    int basic_font_size(){
        if(font_)
            return font_->FontSize;
        return ImGui::GetFont()->FontSize;
    }
    void use_font_size(float size){
        if(!font_)
            return;
        float scale = size / origin_size_;
        use_font_scale(scale);
    }

    void use_font_scale(float scale){
        if(!font_)
            return;
        if(pushed_font_){
            ImGui::PopFont();
            pushed() = false;
        }
        font_->Scale = scale;
        ImGui::PushFont(font_);
        pushed() = true;
    }

    void restore_font_size(){
        if(font_)
            font_->Scale = 1;
        ImGui::PopFont();
        pushed() = false;
    }
private:
    ImFont* font_ = nullptr;
    bool pushed_font_ = false;
    int origin_size_ = 0;
};

template<typename Data>
class GridView{
    typedef std::function<int32_t(Data& data,int index,int width,int height)> draw_callback;
    GridView(int32_t item_width,int32_t item_height,int32_t space);

    int32_t draw(std::vector<Data &> *datas, draw_callback drawer)
    {
        return 0;
    }

    int32_t update()
    {
        return 0;
    }
private:
    std::vector<Data&>* data_;
    int32_t width_;
    int32_t height_;
};

class TextureHolder{
public:
    struct Image{

        ImVec2 top_left() const{
            return ImVec2(float(pos.x)/size_totle.x,float(pos.y)/size_totle.y);
        }
        ImVec2 bottom_right() const{
            return ImVec2(float(pos.x+size.x)/size_totle.x,float(pos.y+size.y)/size_totle.y);
        }

        ImVec2 pos;
        ImVec2 size;
        ImVec2 size_totle;
        ImTextureID texture = 0;
    };
    static Image get(const std::string& name);
    static int32_t add_image(const std::string&name, Image image);
    static const std::map<std::string,Image>& all_images();
private:
    static std::map<std::string,Image> images_;
};

class VideoCutTimeline{
public:
    struct Fragment{


        void set_param(int duration_ms,int pixel_per_second){
            duration_ms_ = duration_ms;
            if(duration_ms_ == 0)
                return;
            if(range_.y == 0)
                range_ = ImVec2(0,duration_ms_);
            resize(pixel_per_second);
        }
        void resize(int pixel_per_second){
            if(range_.y == 0)
                range_ = ImVec2(0,duration_ms_);
            width_ = duration_ms_ / 1000.0 * pixel_per_second;
        }
        int32_t range_width(int pixel_per_second){
            return (range_.y - range_.x) / 1000.0 * pixel_per_second;
        }
        int duration_ms_ = 0;
        std::string name_;
        void* context_ = nullptr;
        ImVec2 range_;
        int width_ = 0;

        bool drag_start_ = false;
        bool drag_end_ = false;
    };
    VideoCutTimeline(){};

    void resize(int pixel_per_second){
        pixel_per_second_ = pixel_per_second;
        totle_width_ = 0;
        for(auto& item : fragments_){
            item.resize(pixel_per_second_);
            totle_width_ += item.width_;
        }
    }

    void insert(int index,const Fragment& fragment){
        if(fragments_.size() < index)
            return;
        fragments_.insert(fragments_.begin()+index,fragment)->resize(pixel_per_second_);
        resize(pixel_per_second_);
    }

    void remove(int index){
        if(fragments_.size() <= index)
            return;
        fragments_.erase(fragments_.begin()+index);
        resize(pixel_per_second_);
    }
    int size(){
        return fragments_.size();
    }
    void show(float height);
private:
    int pixel_per_second_ = 10;
    int range_holder_pixels_ = 20;
    int totle_width_ = 0;

    int offset_x_ = 0;
    bool mouse_down_ = false;
    std::vector<Fragment> fragments_;
    int select_item = 0;
};


}

#endif // IMGUI_HELPER_H