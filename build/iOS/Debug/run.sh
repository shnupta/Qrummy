#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.41.5/targets/ios/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"


case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    pod install
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "qrummy.xcodeproj"
##endif
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.qrummy"
    "/usr/local/share/uno/Packages/UnoCore/0.41.5/prebuilt/iOS/bin/ios-deploy" -9 -1 "com.apps.qrummy"
    exit $?
    ;;
esac

##if #(Cocoapods:Defined)
#pod install
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/usr/local/share/uno/Packages/UnoCore/0.41.5/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Debug-iphoneos/qrummy.app" "$@"
##endif
