// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Permissions{namespace Internal{struct Android;}}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// internal sealed extern class Android :313
// {
uType* Android_typeof();
void Android___call_phone_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval);

struct Android : uObject
{
    static ::g::Uno::Permissions::PlatformPermission _call_phone();
    static ::g::Uno::Permissions::PlatformPermission _internet();
};
// }

}}}} // ::g::Uno::Permissions::Internal
