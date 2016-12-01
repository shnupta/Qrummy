// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/qrummy.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.qrummy_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{

// public static generated class qrummy_bundle :0
// {
// static qrummy_bundle() :0
static void qrummy_bundle__cctor__fn(uType* __type)
{
    qrummy_bundle::Main5482fe66_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"qrummy"*/]))->GetFile(::STRINGS[1/*"main-f98833...*/]);
    qrummy_bundle::VarianeScriptaa14cd2e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"qrummy"*/]))->GetFile(::STRINGS[2/*"variane-scr...*/]);
    qrummy_bundle::wiki_qr11949101_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"qrummy"*/]))->GetFile(::STRINGS[3/*"wiki_qr-fbc...*/]);
}

static void qrummy_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("qrummy");
    ::STRINGS[1] = uString::Const("main-f988331c.js");
    ::STRINGS[2] = uString::Const("variane-script-9b62d758.ttf");
    ::STRINGS[3] = uString::Const("wiki_qr-fbc0e967.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::qrummy_bundle::Main5482fe66_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::qrummy_bundle::VarianeScriptaa14cd2e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::qrummy_bundle::wiki_qr11949101_, uFieldFlagsStatic);
}

uClassType* qrummy_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("qrummy_bundle", options);
    type->fp_build_ = qrummy_bundle_build;
    type->fp_cctor_ = qrummy_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> qrummy_bundle::Main5482fe66_;
uSStrong< ::g::Uno::IO::BundleFile*> qrummy_bundle::VarianeScriptaa14cd2e_;
uSStrong< ::g::Uno::IO::BundleFile*> qrummy_bundle::wiki_qr11949101_;
// }

} // ::g
