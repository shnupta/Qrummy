// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct iOSDevice;}}
namespace g{namespace Fuse{struct OSVersion;}}

namespace g{
namespace Fuse{

// public static extern class iOSDevice :280
// {
uClassType* iOSDevice_typeof();
void iOSDevice__GetiOSVersion_fn(int* major, int* minor, int* patch);
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval);

struct iOSDevice : uObject
{
    static uSStrong< ::g::Fuse::OSVersion*> _osVersion_;
    static uSStrong< ::g::Fuse::OSVersion*>& _osVersion() { return _osVersion_; }

    static void GetiOSVersion(int* major, int* minor, int* patch);
    static ::g::Fuse::OSVersion* OperatingSystemVersion();
};
// }

}} // ::g::Fuse
