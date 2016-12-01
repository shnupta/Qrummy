// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Launcher.h>
#include <Fuse.PhoneUriHelper.h>
#include <UIKit/UIKit.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[14];
static uType* TYPES[1];

namespace g{
namespace Fuse{

// public static class Launcher :15
// {
static void Launcher_build(uType* type)
{
    ::STRINGS[0] = uString::Const("to");
    ::STRINGS[1] = uString::Const("mailto:");
    ::STRINGS[2] = uString::Const("?");
    ::STRINGS[3] = uString::Const("cc=");
    ::STRINGS[4] = uString::Const("&");
    ::STRINGS[5] = uString::Const("bcc=");
    ::STRINGS[6] = uString::Const("subject=");
    ::STRINGS[7] = uString::Const(" ");
    ::STRINGS[8] = uString::Const("%20");
    ::STRINGS[9] = uString::Const("body=");
    ::STRINGS[10] = uString::Const(",");
    ::STRINGS[11] = uString::Const("http://maps.apple.com/maps?q=");
    ::STRINGS[12] = uString::Const("&ll=");
    ::STRINGS[13] = uString::Const("&sll=");
    ::TYPES[0] = ::g::Uno::Double_typeof();
}

uClassType* Launcher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Launcher", options);
    type->fp_build_ = Launcher_build;
    return type;
}

// public static void LaunchCall(string callString) :49
void Launcher__LaunchCall_fn(uString* callString)
{
    Launcher::LaunchCall(callString);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) :126
void Launcher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    Launcher::LaunchEmail(to, carbonCopy, blindCarbonCopy, subject, message);
}

// public static void LaunchMaps(double latitude, double longitude) :76
void Launcher__LaunchMaps_fn(double* latitude, double* longitude)
{
    Launcher::LaunchMaps(*latitude, *longitude);
}

// public static void LaunchMaps(double latitude, double longitude, string query) :97
void Launcher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query)
{
    Launcher::LaunchMaps1(*latitude, *longitude, query);
}

// public static void LaunchMaps(string query) :89
void Launcher__LaunchMaps2_fn(uString* query)
{
    Launcher::LaunchMaps2(query);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) :17
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    Launcher::LaunchUri(uri);
}

// private static extern void LaunchUriiOS(string uri) :44
void Launcher__LaunchUriiOS_fn(uString* uri)
{
    Launcher::LaunchUriiOS(uri);
}

// public static void LaunchCall(string callString) [static] :49
void Launcher::LaunchCall(uString* callString)
{
    uString* uri = ::g::Fuse::PhoneUriHelper::PhoneNumberToUri(callString);
    Launcher::LaunchUriiOS(uri);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) [static] :126
void Launcher::LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    if (::g::Uno::String::op_Equality(to, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"to"*/]));

    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append2(::STRINGS[1/*"mailto:"*/]);
    builder->Append2(to);
    builder->Append2(::STRINGS[2/*"?"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(carbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[3/*"cc="*/]);
        builder->Append2(carbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(blindCarbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[5/*"bcc="*/]);
        builder->Append2(blindCarbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(subject))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[6/*"subject="*/]);
        builder->Append2(::g::Uno::String::Replace1(uPtr(subject), ::STRINGS[7/*" "*/], ::STRINGS[8/*"%20"*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(message))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[9/*"body="*/]);
        builder->Append2(::g::Uno::String::Replace1(uPtr(message), ::STRINGS[7/*" "*/], ::STRINGS[8/*"%20"*/]));
    }

    Launcher::LaunchUriiOS(uPtr(builder)->ToString());
}

// public static void LaunchMaps(double latitude, double longitude) [static] :76
void Launcher::LaunchMaps(double latitude, double longitude)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[0/*double*/]), ::STRINGS[10/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[0/*double*/]));
    Launcher::LaunchUriiOS(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"http://maps...*/], latlon), ::STRINGS[12/*"&ll="*/]), latlon));
}

// public static void LaunchMaps(double latitude, double longitude, string query) [static] :97
void Launcher::LaunchMaps1(double latitude, double longitude, uString* query)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[0/*double*/]), ::STRINGS[10/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[0/*double*/]));
    Launcher::LaunchUriiOS(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"http://maps...*/], query), ::STRINGS[13/*"&sll="*/]), latlon));
}

// public static void LaunchMaps(string query) [static] :89
void Launcher::LaunchMaps2(uString* query)
{
    Launcher::LaunchUriiOS(::g::Uno::String::op_Addition2(::STRINGS[11/*"http://maps...*/], query));
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static] :17
void Launcher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    Launcher::LaunchUriiOS(uPtr(uri)->AbsoluteUri());
}

// private static extern void LaunchUriiOS(string uri) [static] :44
void Launcher::LaunchUriiOS(uString* uri)
{
    @autoreleasepool
    {
        [] (::NSString* uri) -> void
        {
            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:uri]];
        } (::uObjC::NativeString(uri));
        
    }
    
}
// }

}} // ::g::Fuse
