#!/bin/bash
BUILD_PARAM=$1
    
CONFIGURE_PARAM="$ENABLED_COMPONENTS --prefix=$MR_TARGET_PREFIX --enable-strip --enable-pic --enable-static --disable-cli"

function build(){
  if [ $MR_TARGET_OS = 'linux' ] ; then
      
	CONFIGURE_PARAM="$CONFIGURE_PARAM --enable-shared"
	if [ $MR_CROSS_COMPILE = true ] ;then
		CONFIGURE_PARAM="$CONFIGURE_PARAM --cross-prefix=$MR_CROSS_PREFIX"
	fi

	if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
	 	./configure $CONFIGURE_PARAM
	elif [ $MR_TARGET_ARCH = 'x86' ] ; then
		./configure $CONFIGURE_PARAM --host=i386-linux-gnu --extra-cflags="-m32"
	elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
		./configure $CONFIGURE_PARAM --host=aarch64-linux-gnu
	elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
		./configure $CONFIGURE_PARAM --host=arm-linux-gnueabihf
	else
		echo "ERROR: LINUX BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
		return -1
	fi

        make -j
        make install
  elif [ $MR_TARGET_OS = 'android' ] ;then
        CONFIGURE_PARAM="$CONFIGURE_PARAM --cross-prefix=$MR_CROSS_PREFIX --sysroot=$MR_SYSROOT  --enable-shared"
        if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
                ./configure $CONFIGURE_PARAM --host=x86_64-linux-android 
        elif [ $MR_TARGET_ARCH = 'x86' ] ; then
                ./configure $CONFIGURE_PARAM --host=i686-linux-android --disable-asm
        elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
                ./configure $CONFIGURE_PARAM --host=aarch64-linux-android  
        elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
                ./configure $CONFIGURE_PARAM --host=armv7a-linux-android
        else
                echo "ERROR: ANDROID BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
                return -1
        fi
        make -j
        make install
  elif [ $MR_TARGET_OS = 'darwin' ] ;then
    	echo 'Build x264 for macOS'
  elif [ $MR_TARGET_OS = 'mingw' ] ;then
    	./configure $CONFIGURE_PARAM --enable-shared
		make -j
		make install
  elif [ $MR_TARGET_OS = 'ios' ] ;then
    	echo'Build x264 for iOS'
  elif [ $MR_TARGET_OS = 'bsd' ] ;then
    	echo 'Build x264 for BSD'
  fi

}

build


