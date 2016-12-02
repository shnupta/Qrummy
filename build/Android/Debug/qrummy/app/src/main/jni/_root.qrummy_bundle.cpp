// This file was generated based on /Users/caseywilliams/Documents/Apps/Qrummy/Qrummy.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Qrummy_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{

// public static generated class Qrummy_bundle :0
// {
// static Qrummy_bundle() :0
static void Qrummy_bundle__cctor__fn(uType* __type)
{
    Qrummy_bundle::Main632aaf06_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Qrummy"*/]))->GetFile(::STRINGS[1/*"main-f98833...*/]);
    Qrummy_bundle::VarianeScript758bdcce_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Qrummy"*/]))->GetFile(::STRINGS[2/*"variane-scr...*/]);
    Qrummy_bundle::wiki_qr68e6b021_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Qrummy"*/]))->GetFile(::STRINGS[3/*"wiki_qr-fbc...*/]);
}

static void Qrummy_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Qrummy");
    ::STRINGS[1] = uString::Const("main-f988331c.js");
    ::STRINGS[2] = uString::Const("variane-script-9b62d758.ttf");
    ::STRINGS[3] = uString::Const("wiki_qr-fbc0e967.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Qrummy_bundle::Main632aaf06_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Qrummy_bundle::VarianeScript758bdcce_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Qrummy_bundle::wiki_qr68e6b021_, uFieldFlagsStatic);
}

uClassType* Qrummy_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Qrummy_bundle", options);
    type->fp_build_ = Qrummy_bundle_build;
    type->fp_cctor_ = Qrummy_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Qrummy_bundle::Main632aaf06_;
uSStrong< ::g::Uno::IO::BundleFile*> Qrummy_bundle::VarianeScript758bdcce_;
uSStrong< ::g::Uno::IO::BundleFile*> Qrummy_bundle::wiki_qr68e6b021_;
// }

} // ::g
