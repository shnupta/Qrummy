// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Device;}}

namespace g{
namespace Fuse{

// internal static extern class Device :224
// {
uClassType* Device_typeof();
void Device__GetStatusBarOrientation_fn(int* __retval);
void Device__get_StatusBarOrientation_fn(int* __retval);

struct Device : uObject
{
    static int GetStatusBarOrientation();
    static int StatusBarOrientation();
};
// }

}} // ::g::Fuse
