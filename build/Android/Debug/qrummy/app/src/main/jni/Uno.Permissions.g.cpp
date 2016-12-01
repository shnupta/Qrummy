// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Internal.Android.h>
#include <Uno.Permissions.IPermissionPromise.h>
#include <Uno.Permissions.PermissionPromise.h>
#include <Uno.Permissions.Permissions.Android.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Permissions{

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// public static extern class Permissions.Android :122
// {
static void Permissions__Android_build(uType* type)
{
}

uClassType* Permissions__Android_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions.Android", options);
    type->fp_build_ = Permissions__Android_build;
    return type;
}

// public static Uno.Permissions.PlatformPermission get_CALL_PHONE() :159
void Permissions__Android__get_CALL_PHONE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::CALL_PHONE();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET() :194
void Permissions__Android__get_INTERNET_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::INTERNET();
}

// public static Uno.Permissions.PlatformPermission get_CALL_PHONE() [static] :159
::g::Uno::Permissions::PlatformPermission Permissions__Android::CALL_PHONE()
{
    return ::g::Uno::Permissions::Internal::Android::_call_phone();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET() [static] :194
::g::Uno::Permissions::PlatformPermission Permissions__Android::INTERNET()
{
    return ::g::Uno::Permissions::Internal::Android::_internet();
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// internal abstract interface IPermissionPromise :21
// {
uInterfaceType* IPermissionPromise_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Permissions.IPermissionPromise", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// internal sealed class PermissionPromise :27
// {
static void PermissionPromise_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PermissionPromise_type, interface0),
        ::g::Uno::Permissions::IPermissionPromise_typeof(), offsetof(PermissionPromise_type, interface1));
    type->SetFields(9,
        ::g::Uno::Permissions::PlatformPermission_typeof(), offsetof(::g::Uno::Permissions::PermissionPromise, _permission), 0);
}

PermissionPromise_type* PermissionPromise_typeof()
{
    static uSStrong<PermissionPromise_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PermissionPromise);
    options.TypeSize = sizeof(PermissionPromise_type);
    type = (PermissionPromise_type*)uClassType::New("Uno.Permissions.PermissionPromise", options);
    type->fp_build_ = PermissionPromise_build;
    type->interface1.fp_Resolve = (void(*)(uObject*))PermissionPromise__Resolve1_fn;
    type->interface1.fp_Reject = (void(*)(uObject*, ::g::Uno::Exception*))::g::Uno::Threading::Promise__Reject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PermissionPromise(Uno.Permissions.PlatformPermission p) :30
void PermissionPromise__ctor_7_fn(PermissionPromise* __this, ::g::Uno::Permissions::PlatformPermission* p)
{
    __this->ctor_7(*p);
}

// public PermissionPromise New(Uno.Permissions.PlatformPermission p) :30
void PermissionPromise__New5_fn(::g::Uno::Permissions::PlatformPermission* p, PermissionPromise** __retval)
{
    *__retval = PermissionPromise::New5(*p);
}

// public void Resolve() :35
void PermissionPromise__Resolve1_fn(PermissionPromise* __this)
{
    __this->Resolve1();
}

// public PermissionPromise(Uno.Permissions.PlatformPermission p) [instance] :30
void PermissionPromise::ctor_7(::g::Uno::Permissions::PlatformPermission p)
{
    ctor_3();
    _permission = p;
}

// public void Resolve() [instance] :35
void PermissionPromise::Resolve1()
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, uCRef(_permission));
}

// public PermissionPromise New(Uno.Permissions.PlatformPermission p) [static] :30
PermissionPromise* PermissionPromise::New5(::g::Uno::Permissions::PlatformPermission p)
{
    PermissionPromise* obj1 = (PermissionPromise*)uNew(PermissionPromise_typeof());
    obj1->ctor_7(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// public static extern class Permissions :55
// {
static void Permissions_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Permissions could not be requested or granted.");
    ::TYPES[0] = ::g::Uno::Permissions::IPermissionPromise_typeof();
}

uClassType* Permissions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions", options);
    type->fp_build_ = Permissions_build;
    return type;
}

// private static void Failed(object promise) :105
void Permissions__Failed_fn(uObject* promise)
{
    Permissions::Failed(promise);
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission> Request(Uno.Permissions.PlatformPermission x) :69
void Permissions__Request_fn(::g::Uno::Permissions::PlatformPermission* x, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Permissions::Request(*x);
}

// private static void requestPermission(Uno.Threading.Promise<Uno.Permissions.PlatformPermission> promise, string permissionName) :89
void Permissions__requestPermission_fn(::g::Uno::Threading::Promise* promise, uString* permissionName)
{
    Permissions::requestPermission(promise, permissionName);
}

// private static void Succeeded(object promise) :100
void Permissions__Succeeded_fn(uObject* promise)
{
    Permissions::Succeeded(promise);
}

// private static void Failed(object promise) [static] :105
void Permissions::Failed(uObject* promise)
{
    ::g::Uno::Permissions::IPermissionPromise::Reject(uInterface(uPtr((uObject*)promise), ::TYPES[0/*Uno.Permissions.IPermissionPromise*/]), ::g::Uno::Exception::New2(::STRINGS[0/*"Permissions...*/]));
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission> Request(Uno.Permissions.PlatformPermission x) [static] :69
::g::Uno::Threading::Future1* Permissions::Request(::g::Uno::Permissions::PlatformPermission x)
{
    ::g::Uno::Permissions::PermissionPromise* futurePermission = ::g::Uno::Permissions::PermissionPromise::New5(x);
    Permissions::requestPermission(futurePermission, x.Name);
    return futurePermission;
}

// private static void requestPermission(Uno.Threading.Promise<Uno.Permissions.PlatformPermission> promise, string permissionName) [static] :89
void Permissions::requestPermission(::g::Uno::Threading::Promise* promise, uString* permissionName)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "requestPermission54", "(Lcom/uno/UnoObject;Ljava/lang/String;)V");
        ::g::Uno::Threading::Promise* _upromise=promise;
        jobject _promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_upromise);
        uString* _upermissionName=permissionName;
        jstring _permissionName = JniHelper::UnoToJavaString(_upermissionName);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_promise,_permissionName);
        
        if (_promise!=NULL) { U_JNIVAR->DeleteLocalRef(_promise); }
        if (_permissionName!=NULL) { U_JNIVAR->DeleteLocalRef(_permissionName); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Succeeded(object promise) [static] :100
void Permissions::Succeeded(uObject* promise)
{
    ::g::Uno::Permissions::IPermissionPromise::Resolve(uInterface(uPtr((uObject*)promise), ::TYPES[0/*Uno.Permissions.IPermissionPromise*/]));
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/0.41.5/$.uno
// ----------------------------------------------------------

// public struct PlatformPermission :11
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Permissions::PlatformPermission, Name), 0);
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}

// internal PlatformPermission(string name) :15
void PlatformPermission__ctor__fn(PlatformPermission* __this, uString* name)
{
    __this->ctor_(name);
}

// internal PlatformPermission New(string name) :15
void PlatformPermission__New1_fn(uString* name, PlatformPermission* __retval)
{
    *__retval = PlatformPermission__New1(name);
}

// internal PlatformPermission(string name) [instance] :15
void PlatformPermission::ctor_(uString* name)
{
    Name = name;
}

// internal PlatformPermission New(string name) [static] :15
PlatformPermission PlatformPermission__New1(uString* name)
{
    PlatformPermission obj1;
    obj1.ctor_(name);
    return obj1;
}
// }

}}} // ::g::Uno::Permissions
