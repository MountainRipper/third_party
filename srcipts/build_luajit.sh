#!/bin/bash
#$1 for target os: linux,android,macos,ios,bsd
#$2 for target arch: x86_64,x86,aarch64,armv7a,native(none-cross build for arm linux etc...)
#$3 for host arch
#$4 for target path
#$5 for build temp folder
#$6 for Cross compile folder
TARGET_OS=$1
TARGET_ARCH=$2
HOST_ARCH=$3
TARGET_LIB="$4/lib/libluajit.so"
TARGET_INCLUDE="$4/include/luajit"
BUILD_DIR="$5/third_party/luajit"
BUILD_TARGET_DIR="$BUILD_DIR/build"
CROSS_COMPILER=$6

if [ $HOST_ARCH = $TARGET_ARCH ] ; then
  TARGET_ARCH_NATIVE=1
fi

function build(){

  if [ $TARGET_OS = 'linux' ] ; then
      mkdir -p $BUILD_DIR
      cp -rf * $BUILD_DIR
      cd $BUILD_DIR
      echo "build luajit in $(pwd)"
      if [ $TARGET_ARCH = 'x86_64' ] ; then
          #x86_64 will be native build
         echo 'Build for x86_64 Linux'
         make -j6 install PREFIX=$BUILD_TARGET_DIR
      elif [ $TARGET_ARCH = 'x86' ] ; then
          echo 'Build luajit for native Linux, package linux-libc-dev:i386 and libc6-dev-i386 need'
          make CC="gcc -m32" -j6 install PREFIX=$BUILD_TARGET_DIR
      elif [ $TARGET_ARCH = 'aarch64' ] ; then
          echo 'Build luajit for aarch64 Linux'
          make -j6 CROSS=aarch64-linux-gnu- install PREFIX=$BUILD_TARGET_DIR
      elif [ $TARGET_ARCH = 'armv7a' ] ; then
          echo 'Build luajit for armv7a Linux, package linux-libc-dev:i386 and libc6-dev-i386 need'
          make -j6 HOST_CC="gcc -m32" CROSS=arm-linux-gnueabihf- install PREFIX=$BUILD_TARGET_DIR
      else
          echo "ERROR: LINUX BUILD BAD MATCH CROSS COMPILE TARGET:$TARGET_ARCH HOST: $HOST_ARCH"
          return -1
      fi
      mkdir -p $(dirname $TARGET_LIB)
      mkdir -p $TARGET_INCLUDE
      cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.so.2.1.0 $TARGET_LIB
      cp -rf $BUILD_TARGET_DIR/include/luajit-2.1/* $TARGET_INCLUDE
  elif [ $TARGET_OS = 'android' ] ;then
      mkdir -p $BUILD_DIR
      cp -rf * $BUILD_DIR
      cd $BUILD_DIR
      echo "build luajit in $(pwd)"
      echo 'Build luajit for Android'
      if [ $TARGET_ARCH = 'x86_64' ] ; then
          echo 'Build luajit for x86_64 android'
          NDKDIR=$CROSS_COMPILER
          NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          NDKCROSS=$NDKBIN/x86_64-linux-android-
          NDKCC=$NDKBIN/x86_64-linux-android21-clang
          make -j6 CROSS=$NDKCROSS STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" TARGET_LD=$NDKCC TARGET_AR="$NDKBIN/llvm-ar rcus" TARGET_STRIP=$NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      elif [ $TARGET_ARCH = 'x86' ] ; then
          echo 'Build luajit for x86 android'
          NDKDIR=$CROSS_COMPILER
          NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          NDKCROSS=$NDKBIN/i686-linux-androideabi-
          NDKCC=$NDKBIN/i686-linux-android19-clang
          make -j6 HOST_CC="gcc -m32" CROSS=$NDKCROSS STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" TARGET_LD=$NDKCC TARGET_AR="$NDKBIN/llvm-ar rcus" TARGET_STRIP=$NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      elif [ $TARGET_ARCH = 'aarch64' ] ; then
          echo 'Build luajit for aarch64 Android'
          NDKDIR=$CROSS_COMPILER
          NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          NDKCROSS=$NDKBIN/aarch64-linux-android-
          NDKCC=$NDKBIN/aarch64-linux-android21-clang
          make -j6 CROSS=$NDKCROSS STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" TARGET_LD=$NDKCC TARGET_AR="$NDKBIN/llvm-ar rcus" TARGET_STRIP=$NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR

      elif [ $TARGET_ARCH = 'armv7a' ] ; then
          echo 'Build luajit for armeabi-v7a Android'
          NDKDIR=$CROSS_COMPILER
          NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/linux-x86_64/bin
          NDKCROSS=$NDKBIN/arm-linux-androideabi-
          NDKCC=$NDKBIN/armv7a-linux-androideabi19-clang
          make -j6 HOST_CC="gcc -m32" CROSS=$NDKCROSS STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" TARGET_LD=$NDKCC TARGET_AR="$NDKBIN/llvm-ar rcus" TARGET_STRIP=$NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      else
          echo "ERROR: ANDROID BUILD BAD MATCH CROSS COMPILE TARGET:$TARGET_ARCH HOST: $HOST_ARCH"
          return -1
      fi
      mkdir -p $(dirname $TARGET_LIB)
      mkdir -p $TARGET_INCLUDE
      cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.so.2.1.0 $TARGET_LIB
      cp -rf $BUILD_TARGET_DIR/include/luajit-2.1/* $TARGET_INCLUDE
  elif [ $TARGET_OS = 'macos' ] ;then
    echo 'Build luajit for macOS'
  elif [ $TARGET_OS = 'ios' ] ;then
    echo'Build luajit for iOS'
  elif [ $TARGET_OS = 'bsd' ] ;then
    echo 'Build luajit for BSD'
  fi

}

if [ -e $TARGET_LIB ] ;then
  echo "INFO: target luajit shared library $TARGET_LIB already exist,nothing to build"
else
  build
fi
