// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Internal.Android.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// internal sealed extern class Android :313
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.CALL_PHONE");
    ::STRINGS[1] = uString::Const("android.permission.INTERNET");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _call_phone() :491
void Android___call_phone_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_call_phone();
}

// internal static extern Uno.Permissions.PlatformPermission _internet() :666
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_internet();
}

// internal static extern Uno.Permissions.PlatformPermission _call_phone() [static] :491
::g::Uno::Permissions::PlatformPermission Android::_call_phone()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _internet() [static] :666
::g::Uno::Permissions::PlatformPermission Android::_internet()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[1/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
