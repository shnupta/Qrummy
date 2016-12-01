// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/Qreader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.QreaderImpl.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public sealed class QreaderImpl :37
// {
// static QreaderImpl() :37
static void QreaderImpl__cctor__fn(uType* __type)
{
    QreaderImpl::RC_BARCODE_CAPTURE_ = 9001;
}

static void QreaderImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("User cancelled the qr scanner");
    ::TYPES[0] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::QreaderImpl::_intentListener_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::QreaderImpl::RC_BARCODE_CAPTURE_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Threading.Promise<string>*/], (uintptr_t)&::g::QreaderImpl::_FutureResult_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::QreaderImpl::_InProgress_, uFieldFlagsStatic);
}

uType* QreaderImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(QreaderImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("QreaderImpl", options);
    type->fp_build_ = QreaderImpl_build;
    type->fp_cctor_ = QreaderImpl__cctor__fn;
    return type;
}

// public static void Cancelled() :145
void QreaderImpl__Cancelled_fn()
{
    QreaderImpl::Cancelled();
}

// private static generated Uno.Threading.Promise<string> get_FutureResult() :46
void QreaderImpl__get_FutureResult_fn(::g::Uno::Threading::Promise** __retval)
{
    *__retval = QreaderImpl::FutureResult();
}

// private static generated void set_FutureResult(Uno.Threading.Promise<string> value) :46
void QreaderImpl__set_FutureResult_fn(::g::Uno::Threading::Promise* value)
{
    QreaderImpl::FutureResult(value);
}

// private static extern Java.Object Init() :66
void QreaderImpl__Init_fn(::g::Java::Object** __retval)
{
    *__retval = QreaderImpl::Init();
}

// private static generated bool get_InProgress() :42
void QreaderImpl__get_InProgress_fn(bool* __retval)
{
    *__retval = QreaderImpl::InProgress();
}

// private static generated void set_InProgress(bool value) :42
void QreaderImpl__set_InProgress_fn(bool* value)
{
    QreaderImpl::InProgress(*value);
}

// private static extern bool OnRecieved(int requestCode, int resultCode, Java.Object data) :78
void QreaderImpl__OnRecieved_fn(int* requestCode, int* resultCode, ::g::Java::Object* data, bool* __retval)
{
    *__retval = QreaderImpl::OnRecieved(*requestCode, *resultCode, data);
}

// public static void Picked(string result) :150
void QreaderImpl__Picked_fn(uString* result)
{
    QreaderImpl::Picked(result);
}

// public static Uno.Threading.Future<string> Scan() :51
void QreaderImpl__Scan_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = QreaderImpl::Scan();
}

// private static extern void ScannerImpl() :109
void QreaderImpl__ScannerImpl_fn()
{
    QreaderImpl::ScannerImpl();
}

uSStrong< ::g::Java::Object*> QreaderImpl::_intentListener_;
int QreaderImpl::RC_BARCODE_CAPTURE_;
uSStrong< ::g::Uno::Threading::Promise*> QreaderImpl::_FutureResult_;
bool QreaderImpl::_InProgress_;

// public static void Cancelled() [static] :145
void QreaderImpl::Cancelled()
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::InProgress(false);
    uPtr(QreaderImpl::FutureResult())->Reject(::g::Uno::Exception::New2(::STRINGS[0/*"User cancel...*/]));
}

// private static extern Java.Object Init() [static] :66
::g::Java::Object* QreaderImpl::Init()
{
    QreaderImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Init298", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern bool OnRecieved(int requestCode, int resultCode, Java.Object data) [static] :78
bool QreaderImpl::OnRecieved(int requestCode, int resultCode, ::g::Java::Object* data)
{
    QreaderImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnRecieved299", "(IILjava/lang/Object;)Z");
        int _urequestCode=requestCode;
        jint _requestCode = (jint)_urequestCode;
        int _uresultCode=resultCode;
        jint _resultCode = (jint)_uresultCode;
        ::g::Java::Object* _udata=data;
        jobject _data = (_udata==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udata, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_requestCode,_resultCode,_data);
        bool __result = (bool)__jresult;
        
        
        if (_data!=NULL) { U_JNIVAR->DeleteLocalRef(_data); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static void Picked(string result) [static] :150
void QreaderImpl::Picked(uString* result)
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::InProgress(false);
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(QreaderImpl::FutureResult()), result);
}

// public static Uno.Threading.Future<string> Scan() [static] :51
::g::Uno::Threading::Future1* QreaderImpl::Scan()
{
    QreaderImpl_typeof()->Init();

    if (QreaderImpl::InProgress())
        return NULL;

    QreaderImpl::InProgress(true);

    if (QreaderImpl::_intentListener() == NULL)
        QreaderImpl::_intentListener() = QreaderImpl::Init();

    QreaderImpl::ScannerImpl();
    QreaderImpl::FutureResult((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[0/*Uno.Threading.Promise<string>*/]));
    return QreaderImpl::FutureResult();
}

// private static extern void ScannerImpl() [static] :109
void QreaderImpl::ScannerImpl()
{
    QreaderImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ScannerImpl303", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static generated Uno.Threading.Promise<string> get_FutureResult() [static] :46
::g::Uno::Threading::Promise* QreaderImpl::FutureResult()
{
    QreaderImpl_typeof()->Init();
    return QreaderImpl::_FutureResult();
}

// private static generated void set_FutureResult(Uno.Threading.Promise<string> value) [static] :46
void QreaderImpl::FutureResult(::g::Uno::Threading::Promise* value)
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::_FutureResult() = value;
}

// private static generated bool get_InProgress() [static] :42
bool QreaderImpl::InProgress()
{
    QreaderImpl_typeof()->Init();
    return QreaderImpl::_InProgress();
}

// private static generated void set_InProgress(bool value) [static] :42
void QreaderImpl::InProgress(bool value)
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::_InProgress() = value;
}
// }

} // ::g
