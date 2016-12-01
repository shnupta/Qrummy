// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPulseTrigger :1697
// {
uInterfaceType* IPulseTrigger_typeof();

struct IPulseTrigger
{
    void(*fp_Pulse)(uObject*);
    static void Pulse(const uInterface& __this) { __this.VTable<IPulseTrigger>()->fp_Pulse(__this); }
};
// }

}}} // ::g::Fuse::Triggers
