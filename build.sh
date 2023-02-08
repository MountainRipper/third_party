#!/bin/bash
PROJECT_DIR=$(pwd)
SYSTEM=linux
ARCH=x86_64
TARGET_PREFIX="$PROJECT_DIR/targets/$SYSTEM-$ARCH"
TARGET_LIB_DIR="$TARGET_PREFIX/lib"
TARGET_INCLUDE_DIR="$TARGET_PREFIX/include"
DOWNLOAD_DIR="$PROJECT_DIR/_download"
BUILD_TEMP_DIR="$PROJECT_DIR/_build_temp/$SYSTEM-$ARCH"
CMAKE_BUILD_DIR="$SYSTEM-$ARCH"

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
	  	git pull
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

search_file $TARGET_LIB_DIR "*spdlog*"
HAS_BUILD_SPDLOG=$?

search_file $TARGET_LIB_DIR "*luajit*"
HAS_BUILD_LUAJIT=$?

search_file $TARGET_LIB_DIR "*libyuv*"
HAS_BUILD_LIBYUV=$?

search_file $TARGET_LIB_DIR "*x264*"
HAS_BUILD_LIBX264=$?

search_file $TARGET_LIB_DIR "*avcodec*"
HAS_BUILD_FFMPEG=$?

search_file $TARGET_LIB_DIR "*openal*"
HAS_BUILD_OPENAL=$?

mkdir -p $DOWNLOAD_DIR
cd $DOWNLOAD_DIR

echo $HAS_BUILD_SPDLOG
############################################################
SPDLOG_URI="https://github.com/gabime/spdlog/archive/refs/tags/v1.11.0.zip"
SPDLOG_FILE="spdlog-v1.11.0.zip"
SPDLOG_DIR="spdlog-1.11.0"
fetch_lib $SPDLOG_URI $SPDLOG_DIR $SPDLOG_FILE
if [[ -e $SPDLOG_DIR && $HAS_BUILD_SPDLOG == 0 ]] ;then
	cd $SPDLOG_DIR
	BUILD_DIR="$BUILD_TEMP_DIR/spdlog"
	cmake -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$TARGET_PREFIX . 
	cd $BUILD_DIR && make -j && make install
	cd $DOWNLOAD_DIR
fi

############################################################
LUAJIT_URI="https://luajit.org/git/luajit.git"
LUAJIT_DIR="luajit"
fetch_lib $LUAJIT_URI $LUAJIT_DIR
if [[ -e $LUAJIT_DIR && $HAS_BUILD_LUAJIT == 0 ]] ;then
	cd $LUAJIT_DIR
	cp -f "$PROJECT_DIR/srcipts/build_luajit.sh" ./
	BUILD_DIR="$BUILD_TEMP_DIR/luajit"
	./build_luajit.sh linux x86_64 x86_64 $TARGET_PREFIX $BUILD_DIR ""
	cd $DOWNLOAD_DIR
fi


############################################################
LIBYUV_URI="https://chromium.googlesource.com/libyuv/libyuv"
LIBYUV_DIR="libyuv"
fetch_lib $LIBYUV_URI $LIBYUV_DIR
if [[ -e $LIBYUV_DIR && $HAS_BUILD_LIBYUV == 0 ]] ;then
	cd $LIBYUV_DIR
	BUILD_DIR="$BUILD_TEMP_DIR/libyuv"
	cmake -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$TARGET_PREFIX . 
	cd $BUILD_DIR && make -j && make install
	cd $DOWNLOAD_DIR
fi

############################################################
LIBX264_URI="https://code.videolan.org/videolan/x264.git"
LIBX264_DIR="x264"
fetch_lib $LIBX264_URI $LIBX264_DIR

############################################################
FFMPEG_URI="https://ffmpeg.org/releases/ffmpeg-5.1.2.tar.gz"
FFMPEG_FILE="ffmpeg-5.1.2.tar.gz"
FFMPEG_DIR="ffmpeg-5.1.2"
fetch_lib $FFMPEG_URI $FFMPEG_DIR $FFMPEG_FILE 

############################################################
OPENAL_URI="https://github.com/kcat/openal-soft/archive/refs/tags/1.23.0.zip"
OPENAL_FILE="openal-1.23.0.zip"
OPENAL_DIR="openal-soft-1.23.0"
fetch_lib $OPENAL_URI $OPENAL_DIR $OPENAL_FILE 
if [[ -e $OPENAL_DIR && $HAS_BUILD_OPENAL == 0 ]] ;then
	cd $OPENAL_DIR
	BUILD_DIR="$BUILD_TEMP_DIR/openal"
	cmake -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$TARGET_PREFIX -DALSOFT_EXAMPLES=OFF -DALSOFT_UTILS=OFF . 
	cd $BUILD_DIR && make -j && make install
	cd $DOWNLOAD_DIR
fi

############################################################
cd "$PROJECT_DIR/sources"
BUILD_DIR="$BUILD_TEMP_DIR/sources"
cmake -B $BUILD_DIR -DCMAKE_INSTALL_PREFIX=$TARGET_PREFIX . 
cd $BUILD_DIR && make -j && make install
