// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Permissions{struct Permissions__Android;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{

// public static extern class Permissions.Android :122
// {
uClassType* Permissions__Android_typeof();
void Permissions__Android__get_CALL_PHONE_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Permissions__Android__get_INTERNET_fn(::g::Uno::Permissions::PlatformPermission* __retval);

struct Permissions__Android : uObject
{
    static ::g::Uno::Permissions::PlatformPermission CALL_PHONE();
    static ::g::Uno::Permissions::PlatformPermission INTERNET();
};
// }

}}} // ::g::Uno::Permissions
