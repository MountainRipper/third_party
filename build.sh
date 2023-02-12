#!/bin/bash
export MR_TARGET_OS=$1
export MR_TARGET_ARCH=$2
export MR_HOST_OS=$(uname)
export MR_HOST_OS="${MR_HOST_OS,,}"
export MR_HOST_ARCH=$(uname -m)
export MR_PROJECT_DIR=$(pwd)
export MR_CROSS_COMPILE=false

if [ -z "$2" ] ;then
        MR_TARGET_ARCH=$MR_HOST_ARCH
fi

if [ -z "$1" ] ;then
        MR_TARGET_OS=$MR_HOST_OS
fi

export MR_TARGET_PREFIX="$MR_PROJECT_DIR/targets/$MR_TARGET_OS-$MR_TARGET_ARCH"
export MR_TARGET_LIB_DIR="$MR_TARGET_PREFIX/lib"
export MR_TARGET_INCLUDE_DIR="$MR_TARGET_PREFIX/include"
export MR_DOWNLOAD_DIR="$MR_PROJECT_DIR/_download"
export MR_BUILD_TEMP_DIR="$MR_PROJECT_DIR/_build_temp/$MR_TARGET_OS-$MR_TARGET_ARCH"
export MR_CMAKE_BUILD_DIR="$MR_TARGET_OS-$MR_TARGET_ARCH"
export MR_CMAKE_CROSS_CONFIG=""

chmod a+x $MR_PROJECT_DIR/scripts/build_luajit.sh
chmod a+x $MR_PROJECT_DIR/scripts/build_ffmpeg.sh
mkdir -p $MR_BUILD_TEMP_DIR
function download(){
	URI=$1
	DIR=$2
	DEST=$3
	if [ -e $DIR ] ;then
	  	echo "INFO:Directory $DIR already exist"
	  	return
	fi

	if [ -e $DEST ] ;then
		echo "INFO: $DEST already downloaded"
	else
		echo "INFO: Download library $DEST from $URI"
		wget $URI -O $DEST
		if [ ${DEST##*.} = 'zip' ] ;then
			unzip $DEST
		elif [ ${DEST##*.} = 'gz' ] ;then
			tar zxvf $DEST
		fi
	fi
}

function gitclone(){
	URI=$1
	DIR=$2
	if [ -e $DIR ] ;then
	  	echo "INFO:Repo Directory $DIR already exist，update.."
	  	cd $DIR
	  	#git pull
	  	cd ..
	else
		echo "INFO: git clone library from $URI"
		git clone $URI
	fi
}
#$1: uri 
#$2: target dir 
#$3: temp file
function fetch_lib(){
	URI=$1
	EXT=${URI##*.}
	if [ $EXT = 'zip' ] || [ $EXT = 'gz' ] || [ $EXT = 'bz2' ] || [ $EXT = 'xz' ] ;then
		download $1 $2 $3
	else
		gitclone $1 $2
	fi
}


function search_file(){
	if find $1 -maxdepth 1 -name $2 -print -quit | grep -q '^'; then
		echo "$2 found in $1 "
  		return 1
	else
		echo "$2 not found"
  		return 0
	fi
}

############################################################
. config.cfg
CROSS_AARCH64_LINUX_GCC=$AARCH64_LINUX_GNU_GCC
CROSS_AARCH64_LINUX_SYSROOT=$AARCH64_LINUX_GNU_SYSROOT
CROSS_ARMEABI_LINUX_GCC=$ARM_LINUX_GNUEABIHF_GCC
CROSS_ARMEABI_LINUX_SYSROOT=$ARM_LINUX_GNUEABIHF_SYSROOT
CROSS_NDK_DIR=$ANDROID_NDK
echo $CROSS_NDK_DIR

if [[ $MR_HOST_ARCH != $MR_TARGET_ARCH || $MR_HOST_OS != $MR_TARGET_OS ]] ;then
        MR_CROSS_COMPILE=true
fi

if [ $MR_TARGET_OS = "android" ] ;then
	NDK_CMAKE_COMMOM="
	-DANDROID_NDK=$CROSS_NDK_DIR \
	-DCMAKE_TOOLCHAIN_FILE='$CROSS_NDK_DIR/build/cmake/android.toolchain.cmake' \
	-DCMAKE_BUILD_TYPE='Release' \
	-DANDROID_PLATFORM='android-21' \
	-DANDROID_TOOLCHAIN='clang' \
        -DCMAKE_C_FLAGS='-fpic' \
        -DCMAKE_CXX_FLAGS='-fpic' \
	-DANDROID_STL='c++_static'"

        if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
          echo 'Build for x86_64 android'
          export MR_NDKBIN=$CROSS_NDK_DIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          export MR_CC=$MR_NDKBIN/x86_64-linux-android21-clang
          export MR_CXX=$MR_NDKBIN/x86_64-linux-android21-clang++
          export MR_CMAKE_CROSS_CONFIG="$NDK_CMAKE_COMMOM -DANDROID_ABI='x86_64'"
      elif [ $MR_TARGET_ARCH = 'x86' ] ; then
          echo 'Build for x86 android'
          export MR_NDKBIN=$CROSS_NDK_DIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          export MR_CC=$MR_NDKBIN/i686-linux-android19-clang
          export MR_CXX=$MR_NDKBIN/i686-linux-android19-clang++
          export MR_CMAKE_CROSS_CONFIG="$NDK_CMAKE_COMMOM -DANDROID_ABI='x86'"
      elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
          echo 'Build for aarch64 Android'
          export MR_NDKBIN=$CROSS_NDK_DIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          export MR_CC=$MR_NDKBIN/aarch64-linux-android21-clang
          export MR_CXX=$MR_NDKBIN/aarch64-linux-android21-clang++
          export MR_CMAKE_CROSS_CONFIG="$NDK_CMAKE_COMMOM -DANDROID_ABI='arm64-v8a'"
      elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
          echo 'Build for armeabi-v7a Android'
          export MR_NDKBIN=$CROSS_NDK_DIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          export MR_CC=$MR_NDKBIN/armv7a-linux-androideabi19-clang
          export MR_CXX=$MR_NDKBIN/armv7a-linux-androideabi19-clang++d
          export MR_CMAKE_CROSS_CONFIG="$NDK_CMAKE_COMMOM -DANDROID_ABI='armeabi-v7a'  -DANDROID_ARM_NEON=ON"
      else
          echo "ERROR: ANDROID BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
          return -1
      fi

      export MR_SYSROOT=$CROSS_NDK_DIR/toolchains/llvm/prebuilt/linux-x86_64/sysroot
      export MR_CROSS_PREFIX=$MR_NDKBIN/llvm-
      echo $MR_CMAKE_CROSS_CONFIG
fi

if [ $MR_TARGET_OS = "ios" ] ;then
	echo "build for ios"
fi

if [[ $MR_CROSS_COMPILE = "true" && $MR_TARGET_ARCH = "aarch64" && $MR_TARGET_OS = "linux" ]] ;then       
        cp ./scripts/cmake.toolchain/aarch64.cmake.template $MR_BUILD_TEMP_DIR/aarch64.cmake
        sed -i "s#__CROSS_SYSROOT_DIR__#$CROSS_AARCH64_LINUX_SYSROOT#" $MR_BUILD_TEMP_DIR/aarch64.cmake
        sed -i "s#__CROSS_GCC_DIR__#$CROSS_AARCH64_LINUX_GCC#" $MR_BUILD_TEMP_DIR/aarch64.cmake
        
        export PATH=$CROSS_AARCH64_LINUX_GCC/bin:$PATH
        export MR_CROSS_COMPILE=true
        export MR_SYSROOT=$CROSS_AARCH64_LINUX_SYSROOT
        export MR_CROSS_PREFIX="$CROSS_AARCH64_LINUX_GCC/bin/aarch64-linux-gnu-"
        export MR_CC="$CROSS_AARCH64_LINUX_GCC/bin/aarch64-linux-gnu-gcc"
        export MR_CXX="$CROSS_AARCH64_LINUX_GCC/bin/aarch64-linux-gnu-g++"
        export MR_CMAKE_CROSS_CONFIG="-DCMAKE_TOOLCHAIN_FILE=$MR_BUILD_TEMP_DIR/aarch64.cmake"
fi

if [[ $MR_CROSS_COMPILE = "true" && $MR_TARGET_ARCH = "armv7a" && $MR_TARGET_OS = "linux" ]] ;then
        cp ./scripts/cmake.toolchain/gnueabihf.cmake.template $MR_BUILD_TEMP_DIR/gnueabihf.cmake
        sed -i "s#__CROSS_GCC_DIR__#$CROSS_ARMEABI_LINUX_GCC#" $MR_BUILD_TEMP_DIR/gnueabihf.cmake
        sed -i "s#__CROSS_SYSROOT_DIR__#$CROSS_ARMEABI_LINUX_SYSROOT#" $MR_BUILD_TEMP_DIR/gnueabihf.cmake
        
        export PATH=$CROSS_ARMEABI_LINUX_GCC/bin:$PATH
        export MR_CROSS_COMPILE=true
        export MR_SYSROOT=$CROSS_ARMEABI_LINUX_SYSROOT
        export MR_CROSS_PREFIX="$CROSS_ARMEABI_LINUX_GCC/bin/arm-linux-gnueabihf-"
        export MR_CC="$CROSS_ARMEABI_LINUX_GCC/bin/arm-linux-gnueabihf-gcc"
        export MR_CXX="$CROSS_ARMEABI_LINUX_GCC/bin/arm-linux-gnueabihf-g++"
        export MR_CMAKE_CROSS_CONFIG="-DCMAKE_TOOLCHAIN_FILE=$MR_BUILD_TEMP_DIR/gnueabihf.cmake"
fi

if [[ $MR_CROSS_COMPILE = "true" && $MR_TARGET_ARCH = "x86" && $MR_TARGET_OS = "linux" ]] ;then
	#build x86 32bt on x86_64 host
	echo "NOTE: package gcc-multilib g++-multilib need installed"
	export MR_CROSS_COMPILE=false
        export MR_CMAKE_CROSS_CONFIG="-DCMAKE_C_FLAGS='-m32' -DCMAKE_CXX_FLAGS='-m32' "
fi
export CC=$MR_CC
export CXX=$MR_CXX
############################################################
search_file $MR_TARGET_LIB_DIR "*spdlog*"
HAS_BUILD_SPDLOG=$?

search_file $MR_TARGET_LIB_DIR "*luajit*"
HAS_BUILD_LUAJIT=$?

search_file $MR_TARGET_LIB_DIR "*libyuv*"
HAS_BUILD_LIBYUV=$?

search_file $MR_TARGET_LIB_DIR "*x264*"
HAS_BUILD_LIBX264=$?

search_file $MR_TARGET_LIB_DIR "*avcodec*"
HAS_BUILD_FFMPEG=$?

search_file $MR_TARGET_LIB_DIR "*openal*"
HAS_BUILD_OPENAL=$?

mkdir -p $MR_DOWNLOAD_DIR
cd $MR_DOWNLOAD_DIR

############################################################
SPDLOG_URI="https://github.com/gabime/spdlog/archive/refs/tags/v1.11.0.zip"
SPDLOG_FILE="spdlog-v1.11.0.zip"
SPDLOG_DIR="spdlog-1.11.0"
fetch_lib $SPDLOG_URI $SPDLOG_DIR $SPDLOG_FILE
if [[ -e $SPDLOG_DIR && $HAS_BUILD_SPDLOG == 0 ]] ;then
	cd $SPDLOG_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/spdlog"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$MR_TARGET_PREFIX .
        cd $BUILD_DIR && make -j && make install/strip
        cd $MR_DOWNLOAD_DIR
fi

############################################################
LUAJIT_URI="https://luajit.org/git/luajit.git"
LUAJIT_DIR="luajit"
fetch_lib $LUAJIT_URI $LUAJIT_DIR
if [[ -e $LUAJIT_DIR && $HAS_BUILD_LUAJIT = 0 ]] ;then
	cd $LUAJIT_DIR
        cp -f "$MR_PROJECT_DIR/scripts/build_luajit.sh" ./
        export LUAJIT_BUILD_DIR="$MR_BUILD_TEMP_DIR/luajit"
	./build_luajit.sh
        cd $MR_DOWNLOAD_DIR
fi


############################################################
LIBYUV_URI="https://chromium.googlesource.com/libyuv/libyuv"
LIBYUV_DIR="libyuv"
fetch_lib $LIBYUV_URI $LIBYUV_DIR
if [[ -e $LIBYUV_DIR && $HAS_BUILD_LIBYUV = 0 ]] ;then
	cd $LIBYUV_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/libyuv"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$MR_TARGET_PREFIX .
        cd $BUILD_DIR && make -j && make install/strip
        cd $MR_DOWNLOAD_DIR
fi

############################################################
LIBX264_URI="https://code.videolan.org/videolan/x264.git"
LIBX264_DIR="x264"
LIBX264_BUILD_DIR=$MR_BUILD_TEMP_DIR/$LIBX264_DIR
fetch_lib $LIBX264_URI $LIBX264_DIR
if [ ! -e $LIBX264_BUILD_DIR ] ;then
 	cp -r $LIBX264_DIR  $LIBX264_BUILD_DIR
fi
echo $LIBX264_BUILD_DIR
echo $HAS_BUILD_X264
if [[ -e $LIBX264_BUILD_DIR && $HAS_BUILD_LIBX264 = 0 ]] ;then
	cd $LIBX264_BUILD_DIR
        cp -f "$MR_PROJECT_DIR/scripts/build_x264.sh" ./
	./build_x264.sh
        cd $MR_DOWNLOAD_DIR
fi

############################################################
FFMPEG_URI="https://ffmpeg.org/releases/ffmpeg-5.1.2.tar.gz"
FFMPEG_FILE="ffmpeg-5.1.2.tar.gz"
FFMPEG_DIR="ffmpeg-5.1.2"
FFMPEG_BUILD_DIR=$MR_BUILD_TEMP_DIR/$FFMPEG_DIR
fetch_lib $FFMPEG_URI $FFMPEG_DIR $FFMPEG_FILE 
if [ ! -e $FFMPEG_BUILD_DIR ] ;then
 	cp -r $FFMPEG_DIR  $FFMPEG_BUILD_DIR
fi
if [[ -e $FFMPEG_BUILD_DIR && $HAS_BUILD_FFMPEG = 0 ]] ;then
	cd $FFMPEG_BUILD_DIR
        cp -f "$MR_PROJECT_DIR/scripts/build_ffmpeg.sh" ./
        ./build_ffmpeg.sh $FFMPEG_BUILD_TYPE
        cd $MR_DOWNLOAD_DIR
fi
############################################################
OPENAL_URI="https://github.com/kcat/openal-soft/archive/refs/tags/1.23.0.zip"
OPENAL_FILE="openal-1.23.0.zip"
OPENAL_DIR="openal-soft-1.23.0"
fetch_lib $OPENAL_URI $OPENAL_DIR $OPENAL_FILE 
if [[ -e $OPENAL_DIR && $HAS_BUILD_OPENAL = 0 ]] ;then
	cd $OPENAL_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/openal"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$MR_TARGET_PREFIX -DALSOFT_EXAMPLES=OFF -DALSOFT_UTILS=OFF .
        cd $BUILD_DIR && make -j && make install/strip
        cd $MR_DOWNLOAD_DIR
fi

############################################################
cd "$MR_PROJECT_DIR/sources"
BUILD_DIR="$MR_BUILD_TEMP_DIR/sources"
cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$MR_TARGET_PREFIX .
cd $BUILD_DIR && make -j && make install/strip
