#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.41.5/targets/android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "qrummy"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.qrummy"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.qrummy"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "qrummy.apk" \
    --package=com.apps.qrummy \
    --activity=qrummy \
    --sym-dir="qrummy/app/src/main/.uno" \
    "$@"
