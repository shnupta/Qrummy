// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Maps;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Maps :506
// {
::g::Fuse::Scripting::NativeModule_type* Maps_typeof();
void Maps__ctor_2_fn(Maps* __this);
void Maps__New2_fn(Maps** __retval);
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct Maps : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Maps*> _instance_;
    static uSStrong<Maps*>& _instance() { return _instance_; }

    void ctor_2();
    static Maps* New2();
    static uObject* OpenAt(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* SearchNear(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
