// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{

// public struct PlatformPermission :11
// {
uStructType* PlatformPermission_typeof();
void PlatformPermission__ctor__fn(PlatformPermission* __this, uString* name);
void PlatformPermission__New1_fn(uString* name, PlatformPermission* __retval);

struct PlatformPermission
{
    uStrong<uString*> Name;

    void ctor_(uString* name);
};

PlatformPermission PlatformPermission__New1(uString* name);
// }

}}} // ::g::Uno::Permissions
