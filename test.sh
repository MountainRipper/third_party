#!/bin/bash
PROJECT_DIR=$(pwd)
sed_escape() {
  sed -e 's/[]\/$*.^[]/\\&/g'
}

cfg_write() { # path, key, value
  cfg_delete "$1" "$2"
  echo "$2=$3" >> "$1"
}

cfg_read() { # path, key -> value
  test -f "$1" && grep "^$(echo "$2" | sed_escape)=" "$1" | sed "s/^$(echo "$2" | sed_escape)=//" | tail -1
}

cfg_delete() { # path, key
  test -f "$1" && sed -i "/^$(echo $2 | sed_escape).*$/d" "$1"
}

cfg_haskey() { # path, key
  test -f "$1" && grep "^$(echo "$2" | sed_escape)=" "$1" > /dev/null
}

cfg_read cross_compiler.cfg aarch64-linux-gnu
CROSS_AARCH64_LINUX=$?
cfg_read cross_compiler.cfg arm-linux-gnueabihf
CROSS_ARMEABI_LINUX=$?
cfg_read cross_compiler.cfg ndk
CROSS_NDK=cfg_read cross_compiler.cfg ndk

echo $CROSS_NDK
HOST_ARCH=$(uname)
HOST_ARCH="${HOST_ARCH,,}"
echo $HOST_ARCH
