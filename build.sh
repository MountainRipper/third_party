#!/bin/bash
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
                if [ ! -e $DEST ] ;then
                        echo "download $DEST failed"
                        return 0
                fi
        fi



        if [ ${DEST##*.} = 'zip' ] ;then
                unzip $DEST
        elif [ ${DEST##*.} = 'gz' ] ;then
                tar zxvf $DEST
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

export MR_TARGET_OS=$1
export MR_TARGET_ARCH=$2
export MR_HOST_OS=$(uname)
export MR_HOST_OS="${MR_HOST_OS,,}"
export MR_HOST_ARCH=$(uname -m)
export MR_COMPILER=""
export MR_PROJECT_DIR=$(pwd)
export MR_CROSS_COMPILE=false

if [ -z "$2" ] ;then
        MR_TARGET_ARCH=$MR_HOST_ARCH
fi

if [ -z "$1" ] ;then
        MR_TARGET_OS=$MR_HOST_OS
fi

export MR_CC=gcc
export MR_CXX=g++
export MR_COMPILER=gcc
export MR_COMPILER_VER=$MR_COMPILER

case $MR_HOST_OS in
    *"linux"*)
        export MR_COMPILER=$MR_CC
        export MR_COMPILER_VER=$MR_COMPILER
    ;;
    *"android"*)
        export MR_CC=clang
        export MR_CXX=clang++
        export MR_COMPILER=$MR_CC
        export MR_COMPILER_VER=$MR_COMPILER
    ;;
    *"darwin"*)
        export MR_CC=clang
        export MR_CXX=clang++
        export MR_COMPILER=$MR_CC
        export MR_COMPILER_VER=$MR_COMPILER
    ;;
    *"mingw64"*)
        export MR_HOST_OS=windows
        export MR_TARGET_OS=windows
        export MR_COMPILER=mingw
        export MR_COMPILER_VER=$MR_COMPILER
        pacman -S --noconfirm --needed mingw-w64-x86_64-gcc mingw-w64-x86_64-nasm mingw-w64-x86_64-cmake make git unzip
    ;;
    *"msys_nt"*)
        export MR_HOST_OS=windows
        export MR_TARGET_OS=windows
        export MR_CC=cl
        export MR_CXX=cl
        export MR_COMPILER="msvc"
        pacman -S --noconfirm --needed nasm yasm git unzip
        sed -i "s#rem set MSYS2_PATH_TYPE=inherit#set MSYS2_PATH_TYPE=inherit#" tools/msys2/msys2_shell.cmd

        case $VCINSTALLDIR  in
            *"2022"*)
                echo "USE MSVC 2022"
                export MR_COMPILER_VER=msvc2022
            ;;
            *"2019"*)
                echo "USE MSVC 2019"
                export MR_COMPILER_VER=msvc2019
            ;;
        esac
    ;;
esac

. config.cfg
export CROSS_AARCH64_LINUX_GCC=$AARCH64_LINUX_GNU_GCC
export CROSS_AARCH64_LINUX_SYSROOT=$AARCH64_LINUX_GNU_SYSROOT
export CROSS_ARMEABI_LINUX_GCC=$ARM_LINUX_GNUEABIHF_GCC
export CROSS_ARMEABI_LINUX_SYSROOT=$ARM_LINUX_GNUEABIHF_SYSROOT
export CROSS_NDK_DIR=$ANDROID_NDK
export MR_BUILD_TYPE=$BUILD_TYPE
BUILD_TYPE_DIR="$(tr [A-Z] [a-z] <<< "$MR_BUILD_TYPE")"

export MR_PREBUILD_DIR="$MR_PROJECT_DIR/prebuild/$MR_TARGET_OS-$MR_COMPILER_VER-$MR_TARGET_ARCH"
export MR_TARGET_PREFIX="$MR_PROJECT_DIR/targets/${BUILD_TYPE_DIR}/$MR_TARGET_OS-$MR_COMPILER_VER-$MR_TARGET_ARCH"
export MR_TARGET_BIN_DIR="$MR_TARGET_PREFIX/bin"
export MR_TARGET_LIB_DIR="$MR_TARGET_PREFIX/lib"
export MR_TARGET_INCLUDE_DIR="$MR_TARGET_PREFIX/include"
export MR_DOWNLOAD_DIR="$MR_PROJECT_DIR/_download"
export MR_BUILD_TEMP_DIR="$MR_PROJECT_DIR/_build_temp/${BUILD_TYPE_DIR}/$MR_TARGET_OS-$MR_COMPILER_VER-$MR_TARGET_ARCH"
export MR_CMAKE_BUILD_DIR="$MR_TARGET_OS-$MR_COMPILER_VER-$MR_TARGET_ARCH"
export MR_CMAKE_CROSS_CONFIG=""
#NOTE: Add install prefix to PKG_CONFIG_PATH
export PKG_CONFIG_PATH="$PKG_CONFIG_PATH:$MR_TARGET_LIB_DIR/pkgconfig"


if [[ ! -e $MR_PROJECT_DIR/targets/$BUILD_TYPE_DIR/prebuild.txt ]] ;then
        cp -rf  $MR_PROJECT_DIR/prebuild/.  $MR_PROJECT_DIR/targets/$BUILD_TYPE_DIR
fi

chmod a+x $MR_PROJECT_DIR/scripts/build_luajit.sh
chmod a+x $MR_PROJECT_DIR/scripts/build_ffmpeg.sh
mkdir -p $MR_BUILD_TEMP_DIR
mkdir -p $MR_TARGET_BIN_DIR
mkdir -p $MR_TARGET_LIB_DIR
mkdir -p $MR_TARGET_INCLUDE_DIR


if [[ $MR_HOST_ARCH != $MR_TARGET_ARCH || $MR_HOST_OS != $MR_TARGET_OS ]] ;then
        MR_CROSS_COMPILE=true
fi

export CMAKE_CXX_COMPILER=$MR_CXX

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
export MR_CMAKE_CROSS_CONFIG="$MR_CMAKE_CROSS_CONFIG -DCMAKE_BUILD_TYPE=$MR_BUILD_TYPE -DCMAKE_INSTALL_PREFIX=$MR_TARGET_PREFIX -DCMAKE_POSITION_INDEPENDENT_CODE=ON"


if [ $MR_COMPILER = "msvc" ] ;then
    export MR_CMAKE_CROSS_CONFIG="$MR_CMAKE_CROSS_CONFIG -GNinja "
fi

############################################################
search_file $MR_TARGET_LIB_DIR "*spdlog*"
HAS_BUILD_SPDLOG=$?

search_file $MR_TARGET_LIB_DIR "*zlib*"
HAS_BUILD_ZLIB=$?

search_file $MR_TARGET_LIB_DIR "*luajit*"
HAS_BUILD_LUAJIT=$?

search_file $MR_TARGET_LIB_DIR "*yuv*"
HAS_BUILD_LIBYUV=$?

search_file $MR_TARGET_LIB_DIR "*x264*"
HAS_BUILD_LIBX264=$?

search_file $MR_TARGET_LIB_DIR "*avcodec*"
HAS_BUILD_FFMPEG=$?

if [ $MR_HOST_OS = "windows" ] ;then
	search_file $MR_TARGET_LIB_DIR "*OpenAL*"
else
	search_file $MR_TARGET_LIB_DIR "*openal*"
fi
HAS_BUILD_OPENAL=$?

search_file $MR_TARGET_LIB_DIR "*png*"
HAS_BUILD_LIBPNG=$?

search_file $MR_TARGET_LIB_DIR "*freetype*"
HAS_BUILD_FREETYPE=$?

search_file $MR_TARGET_LIB_DIR "*glad*"
HAS_BUILD_GLAD=$?

search_file $MR_TARGET_LIB_DIR "*mrcommon*"
HAS_BUILD_MRCOMMON=$?

mkdir -p $MR_DOWNLOAD_DIR
cd $MR_DOWNLOAD_DIR

############################################################
SPDLOG_URI="https://github.com/gabime/spdlog/archive/refs/tags/v1.11.0.zip"
SPDLOG_FILE="spdlog-v1.11.0.zip"
SPDLOG_DIR="spdlog-1.11.0"
fetch_lib $SPDLOG_URI $SPDLOG_DIR $SPDLOG_FILE
if [[ -e $SPDLOG_DIR && $HAS_BUILD_SPDLOG == 0 ]] ;then
	cd $SPDLOG_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/spdlog-1.11.0"
        cmake $MR_CMAKE_CROSS_CONFIG -DSPDLOG_BUILD_EXAMPLE=OFF -B $BUILD_DIR .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR
        cd $MR_DOWNLOAD_DIR
fi

############################################################
ZLIB_URI="https://www.zlib.net/zlib-1.2.13.tar.gz"
ZLIB_FILE="zlib-1.2.13.tar.gz"
ZLIB_DIR="zlib-1.2.13"
fetch_lib $ZLIB_URI $ZLIB_DIR $ZLIB_FILE
if [[ -e $ZLIB_DIR && $HAS_BUILD_ZLIB == 0 ]] ;then
        cd $ZLIB_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/zlib-1.2.13"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR
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
        if [ $MR_HOST_OS = "mingw" ] ;then
                echo ">>>>>>>>>>>>>>>>>>>>>>>>"
                sed -i "s#{CMAKE_BINARY_DIR}/yuvconvert\t#{CMAKE_BINARY_DIR}/yuvconvert.exe\t#" CMakeLists.txt
        fi
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR

        if [ $MR_HOST_OS = "mingw" ] ;then
                cp -f $BUILD_DIR/*.dll.a $MR_TARGET_LIB_DIR/
        fi
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
        BUILD_DIR="$MR_BUILD_TEMP_DIR/openal-1.23.0"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR -DALSOFT_EXAMPLES=OFF -DALSOFT_UTILS=OFF .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR
        cd $MR_DOWNLOAD_DIR
fi

############################################################
FREETYPE_URI="https://gitlab.freedesktop.org/freetype/freetype/-/archive/VER-2-13-0/freetype-VER-2-13-0.tar.gz"
FREETYPE_FILE="freetype-VER-2-13-0.tar.gz"
FREETYPE_DIR="freetype-VER-2-13-0"
fetch_lib $FREETYPE_URI $FREETYPE_DIR $FREETYPE_FILE 
if [[ -e $FREETYPE_DIR && $HAS_BUILD_FREETYPE = 0 ]] ;then
	cd $FREETYPE_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/freetype-2.13.0"
        CMAKE_PLATFORM_CONFIG=""
        if [[ $MR_TARGET_OS = "android" || $MR_TARGET_OS = "linux" || $MR_TARGET_OS = "windows" || $MR_TARGET_OS = "mingw" ]] ;then
        	CMAKE_PLATFORM_CONFIG="-DBUILD_SHARED_LIBS=true "
        	echo ""
        fi
        cmake $MR_CMAKE_CROSS_CONFIG $CMAKE_PLATFORM_CONFIG -B $BUILD_DIR -DFT_DISABLE_BROTLI=TRUE  .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR
        cd $MR_DOWNLOAD_DIR
fi


############################################################
LIBPNG_URI="https://github.com/glennrp/libpng/archive/refs/tags/v1.6.39.tar.gz"
LIBPNG_FILE="libpng-1.6.39.tar.gz"
LIBPNG_DIR="libpng-1.6.39"
fetch_lib $LIBPNG_URI $LIBPNG_DIR $LIBPNG_FILE 
if [[ -e $LIBPNG_DIR && $HAS_BUILD_LIBPNG = 0 ]] ;then
	cd $LIBPNG_DIR
        BUILD_DIR="$MR_BUILD_TEMP_DIR/libpng-1.6.39"
        cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR .
        cmake --build $BUILD_DIR -j
        cmake --install $BUILD_DIR
        cd $MR_DOWNLOAD_DIR
fi

############################################################
if [[ $HAS_BUILD_MRCOMMON = 0 || $HAS_BUILD_GLAD = 0 ]] ;then
	cd "$MR_PROJECT_DIR/sources"
	BUILD_DIR="$MR_BUILD_TEMP_DIR/sources"
	cmake $MR_CMAKE_CROSS_CONFIG -B $BUILD_DIR .
        cmake --build $BUILD_DIR -j
	cmake --install $BUILD_DIR
fi


mv -f $MR_TARGET_PREFIX/bin/*.lib $MR_TARGET_PREFIX/lib/
