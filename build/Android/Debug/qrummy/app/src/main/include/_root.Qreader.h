// This file was generated based on /Users/caseywilliams/Documents/Apps/Qrummy/Qreader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{struct Qreader;}

namespace g{

// public sealed class Qreader :9
// {
::g::Fuse::Scripting::NativeModule_type* Qreader_typeof();
void Qreader__ctor_2_fn(Qreader* __this);
void Qreader__New2_fn(Qreader** __retval);
void Qreader__Scan_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Qreader : ::g::Fuse::Scripting::NativeModule
{
    void ctor_2();
    static Qreader* New2();
    static ::g::Uno::Threading::Future1* Scan(uArray* args);
};
// }

} // ::g
