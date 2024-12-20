#!/bin/bash
TARGET_LIB="$MR_TARGET_PREFIX/lib/libluajit.so"
if [[ $MR_HOST_OS = 'mingw' ]] ;then
	TARGET_LIB="$MR_TARGET_PREFIX/bin/lua51.dll"
fi


TARGET_INCLUDE="$MR_TARGET_PREFIX/include/luajit"
BUILD_DIR=$LUAJIT_BUILD_DIR
BUILD_TARGET_DIR="$BUILD_DIR/build"

if [ $MR_HOST_ARCH = $MR_TARGET_ARCH ] ; then
  MR_TARGET_ARCH_NATIVE=1
fi

if [ ! -e $BUILD_DIR ] ; then
      mkdir -p $BUILD_DIR
      cp -rf * $BUILD_DIR
fi

cd $BUILD_DIR
echo "build luajit in $(pwd)"

sed -i "s/#XCFLAGS+= -DLUAJIT_ENABLE_LUA52COMPAT/XCFLAGS+= -DLUAJIT_ENABLE_LUA52COMPAT/" src/Makefile
sed -i "s#/D_CRT_SECURE_NO_DEPRECATE#/D_CRT_SECURE_NO_DEPRECATE /DLUAJIT_ENABLE_LUA52COMPAT#" src/msvcbuild.bat

function build(){
  if [ $MR_TARGET_OS = 'linux' ] ; then
	  
      if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
          #x86_64 will be native build
         echo 'Build for x86_64 Linux'
         make -j install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'x86' ] ; then
          echo 'Build luajit for native Linux, package linux-libc-dev:i386 and libc6-dev-i386 need'
          make -j CC="gcc -m32" -j6 install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
          echo 'Build luajit for aarch64 Linux'
          make -j CROSS=aarch64-linux-gnu- install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
          echo 'Build luajit for armv7a Linux, package linux-libc-dev:i386 and libc6-dev-i386 need'
          make -j HOST_CC="gcc -m32" CROSS=arm-linux-gnueabihf- install PREFIX=$BUILD_TARGET_DIR
      else
          echo "ERROR: LINUX BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
          return -1
      fi
      mkdir -p $(dirname $TARGET_LIB)
      mkdir -p $TARGET_INCLUDE
      cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.so.2.1.0 $TARGET_LIB
      cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.so.2.1.0 "$MR_TARGET_PREFIX/bin/libluajit-5.1.so.2"
  elif [ $MR_TARGET_OS = 'android' ] ;then
      echo 'Build luajit for Android'
      if [ $MR_TARGET_ARCH = 'x86_64' ] ; then
          make -j CROSS=$MR_CROSS_PREFIX STATIC_CC=$MR_CC DYNAMIC_CC="$MR_CC -fPIC" TARGET_LD=$MR_CC TARGET_AR="$MR_NDKBIN/llvm-ar rcus" TARGET_STRIP=$MR_NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'x86' ] ; then
          make -j HOST_CC="gcc -m32" CROSS=$MR_CROSS_PREFIX STATIC_CC=$MR_CC DYNAMIC_CC="$MR_CC -fPIC" TARGET_LD=$MR_CC TARGET_AR="$MR_NDKBIN/llvm-ar rcus" TARGET_STRIP=$MR_NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'aarch64' ] ; then
          make -j CROSS=$MR_CROSS_PREFIX STATIC_CC=$MR_CC DYNAMIC_CC="$MR_CC -fPIC" TARGET_LD=$MR_CC TARGET_AR="$MR_NDKBIN/llvm-ar rcus" TARGET_STRIP=$MR_NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      elif [ $MR_TARGET_ARCH = 'armv7a' ] ; then
          make -j HOST_CC="gcc -m32" CROSS=$MR_CROSS_PREFIX STATIC_CC=$MR_CC DYNAMIC_CC="$MR_CC -fPIC" TARGET_LD=$MR_CC TARGET_AR="$MR_NDKBIN/llvm-ar rcus" TARGET_STRIP=$MR_NDKBIN/llvm-strip install PREFIX=$BUILD_TARGET_DIR
      else
          echo "ERROR: ANDROID BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH HOST: $MR_HOST_ARCH"
          return -1
      fi
      mkdir -p $(dirname $TARGET_LIB)
      mkdir -p $TARGET_INCLUDE
      cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.so.2.1.0 $TARGET_LIB
  elif [ $MR_TARGET_OS = 'darwin' ] ;then
    echo 'Build luajit for macOS'
    MACOSX_DEPLOYMENT_TARGET=10.12 make -j install PREFIX=$BUILD_TARGET_DIR
    cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.2.1.ROLLING.dylib $TARGET_LIB
    cp -rf $BUILD_TARGET_DIR/lib/libluajit-5.1.a "$MR_TARGET_PREFIX/lib/libluajit.a"
  elif [[ $MR_TARGET_OS = 'windows' ]] ;then
        if [ $MR_COMPILER = 'mingw' ] ; then
            echo 'Build luajit for MinGW on Windows'
            make -j install PREFIX=$BUILD_TARGET_DIR
        elif [ $MR_COMPILER = 'msvc' ] ; then
            echo 'Build luajit for MSVC on Windows'
            export PATH_OLD=$PATH
            export PATH=$ORIGINAL_PATH:$PATH
            cd src
            cmd /C "cmd /C msvcbuild.bat"
            export PATH=$PATH_OLD
            cp -rf lauxlib.h  lua.h  lua.hpp  luaconf.h  luajit.h  lualib.h $MR_TARGET_PREFIX/include/luajit
            cp -rf *.dll *.exe $MR_TARGET_PREFIX/bin
            cp -rf *.lib $MR_TARGET_PREFIX/lib
        else
          echo "ERROR: WINDOWS BUILD BAD MATCH CROSS COMPILE TARGET:$MR_TARGET_ARCH COMPILER: $MR_COMPILER"
          return -1
        fi	
  elif [ $MR_TARGET_OS = 'ios' ] ;then
    echo'Build luajit for iOS'
  elif [ $MR_TARGET_OS = 'darwin' ] ;then
    echo 'Build for x86_64 MacOS'
    make -j install PREFIX=$BUILD_TARGET_DIR
  elif [ $MR_TARGET_OS = 'bsd' ] ;then
    echo 'Build luajit for BSD'
  fi

}

if [ -e $TARGET_LIB ] ;then
  echo "INFO: target luajit shared library $TARGET_LIB already exist,nothing to build"
else
  build
  mkdir -p $TARGET_INCLUDE
  cp -rf $BUILD_TARGET_DIR/include/luajit-2.1/* $TARGET_INCLUDE
fi
