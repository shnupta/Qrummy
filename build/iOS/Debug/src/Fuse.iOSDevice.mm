// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOSDevice.h>
#include <Fuse.OSVersion.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{

// public static extern class iOSDevice :280
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::OSVersion_typeof(), (uintptr_t)&::g::Fuse::iOSDevice::_osVersion_, uFieldFlagsStatic);
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) :302
void iOSDevice__GetiOSVersion_fn(int* major, int* minor, int* patch)
{
    iOSDevice::GetiOSVersion(major, minor, patch);
}

// public static Fuse.OSVersion get_OperatingSystemVersion() :291
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

uSStrong< ::g::Fuse::OSVersion*> iOSDevice::_osVersion_;

// private static void GetiOSVersion(int& major, int& minor, int& patch) [static] :302
void iOSDevice::GetiOSVersion(int* major, int* minor, int* patch)
{
    @autoreleasepool
    {
        *major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
        			*minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
        			*patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    }
    
}

// public static Fuse.OSVersion get_OperatingSystemVersion() [static] :291
::g::Fuse::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int major, minor, patch;
    iOSDevice::GetiOSVersion(&major, &minor, &patch);
    return iOSDevice::_osVersion_ = ::g::Fuse::OSVersion::New1(major, minor, patch);
}
// }

}} // ::g::Fuse
