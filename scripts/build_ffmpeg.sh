#!/bin/bash

BUILD_PARAM=$1
if [ -z "$BUILD_PARAM" ] ;then
	BUILD_PARAM=mini
fi

if [ $BUILD_PARAM = 'full' ] ; then
    ENABLED_COMPONENTS=""
elif [ $BUILD_PARAM = 'mini' ] ; then
	ENABLED_COMPONENTS="
	--disable-avdevice --disable-postproc \
	--disable-decoders --enable-decoder=h264,hevc,av1,vp8,vp9,prores,aac,mp3,vorbis,pcm* \
	--disable-encoders --enable-encoder=aac,prores,h264_*,hevc_* \
	--disable-demuxers --enable-demuxer=mp4,mov,avi,matroska,flv,asf,live_flv,h264,ogg,aac,mp3,wav \
	--disable-muxers --enable-muxer=mp4,mov,flv,wav,aac \
	--disable-parsers --enable-parser=h264,hevc,vp8,vp9,av1,aac*" 
elif [ $BUILD_PARAM = 'tiny' ] ; then
	ENABLED_COMPONENTS="
	--disable-avdevice --disable-postproc \
	--disable-decoders --enable-decoder=h264,hevc,prores,aac,pcm* \
	--disable-encoders --enable-encoder=aac,prores \
	--disable-demuxers --enable-demuxer=mp4,mov,h264,aac,wav \
	--disable-muxers --enable-muxer=mp4,mov,wav,aac \
	--disable-parsers --enable-parser=h264,hevc,aac* \
	--disable-hwaccels --enable-hwaccel=h264*,hevc* \
	--disable-protocols --enable-protocol=file,http,hls,data \
	--disable-bsfs --enable-bsf=h264*,hevc*,aac*" 
else
	ENABLED_COMPONENTS=$BUILD_PARAM
	echo "INFO: ffmpeg use build config:$ENABLED_COMPONENTS"
	return -1
fi
    
CONFIGURE_PARAM="$ENABLED_COMPONENTS --prefix=$MR_TARGET_PREFIX --enable-pic --disable-debug --disable-doc --enable-libx264 --enable-gpl"
 
#disable create symlinks
sed -i "s#SLIB_INSTALL_NAME='\$(SLIBNAME_WITH_VERSION)'#SLIB_INSTALL_NAME='\$(SLIBNAME)'#" configure
sed -i "s#SLIBNAME_WITH_MAJOR='\$(SLIBNAME).\$(LIBMAJOR)'#SLIBNAME_WITH_MAJOR='\$(SLIBNAME)'#" configure
sed -i "s#SLIB_INSTALL_LINKS='\$(SLIBNAME_WITH_MAJOR) \$(SLIBNAME)'#SLIB_INSTALL_LINKS=#" configure

function build(){
  if [ $MR_TARGET_OS = 'linux' ] ; then
  	M32_FLAG=""
  	if [ $MR_TARGET_ARCH = 'x86' ] ; then 
  		M32_FLAG=" -m32"
  	fi
  	CONFIGURE_PARAM="$CONFIGURE_PARAM --enable-shared --target-os=linux --extra-cflags=\"-I$MR_TARGET_INCLUDE_DIR$M32_FLAG\" --extra-ldflags=\"-L$MR_TARGET_LIB_DIR$M32_FLAG\""
	if [ $MR_CROSS_COMPILE = true ] ;then
		CONFIGURE_PARAM="$CONFIGURE_PARAM --enable-cross-compile --cross-prefix=$MR_CROSS_PREFIX --sysroot=$MR_SYSROOT --cc=$MR_CC --cxx=$MR_CXX"
		export PKG_CONFIG_PATH=$MR_SYSROOT/usr/lib/pkgconfig
	fi
	
	echo $CONFIGURE_PARAM
	if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
	 	./configure $CONFIGURE_PARAM
	elif [ $MR_TARGET_ARCH = 'x86' ] ; then
		./configure $CONFIGURE_PARAM --arch=x86 --disable-asm 
        elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
                ./configure $CONFIGURE_PARAM --arch=aarch64 
	elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
		./configure $CONFIGURE_PARAM --arch=arm 
	else
	  echo "ERROR: LINUX BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
	  return -1
	fi

	make -j
	make install
  elif [ $MR_TARGET_OS = 'android' ] ; then
        CONFIGURE_PARAM="$CONFIGURE_PARAM --enable-shared  --target-os=android --enable-cross-compile --cross-prefix=$MR_CROSS_PREFIX --sysroot=$MR_SYSROOT  --cc=$MR_CC --cxx=$MR_CXX --extra-ldflags=\"-L$MR_TARGET_LIB_DIR\" --extra-cflags=\"-DVK_ENABLE_BETA_EXTENSIONS=0 -I$MR_TARGET_INCLUDE_DIR\""
        if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
                ./configure $CONFIGURE_PARAM --arch=x86_64
        elif [ $MR_TARGET_ARCH = 'x86' ] ; then
                ./configure $CONFIGURE_PARAM --arch=x86 --disable-asm
        elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
                ./configure $CONFIGURE_PARAM --arch=aarch64 
        elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
                ./configure $CONFIGURE_PARAM --arch=armv7a
        else
                echo "ERROR: ANDROID BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
                return -1
        fi
        make -j
        make install
  elif [ $MR_TARGET_OS = 'darwin' ] ;then
    echo 'Build luajit for macOS'
  elif [[ $MR_TARGET_OS = 'mingw' && $MR_HOST_OS = 'mingw' ]] ;then
	echo 'Build ffmpeg for MinGW on Windows'
	CONFIGURE_PARAM="$CONFIGURE_PARAM --enable-shared --enable-libx264 --enable-gpl"
	./configure $CONFIGURE_PARAM
	make -j
	make install
  elif [ $MR_TARGET_OS = 'ios' ] ;then
    echo'Build luajit for iOS'
  elif [ $MR_TARGET_OS = 'bsd' ] ;then
    echo 'Build luajit for BSD'
  fi

}

build
make install


