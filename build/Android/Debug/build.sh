#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.41.5/targets/android/gradle-build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e

export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_40.jdk/Contents/Home"

export SCRIPT_DIR="`dirname "$0"`"

echo "## 2/2: Qrummy.apk"

cd "$SCRIPT_DIR/Qrummy/"

##if #(AltBuildPath:IsSet)
#./gradlew clean
##endif
./gradlew assembleDebug

cd "$SCRIPT_DIR"

ln -sf Qrummy/app/build/outputs/apk/app-arm7-debug.apk Qrummy.apk
