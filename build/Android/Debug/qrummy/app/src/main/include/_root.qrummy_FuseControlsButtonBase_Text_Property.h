// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/.uno/ux11/qrummy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ButtonBase;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct qrummy_FuseControlsButtonBase_Text_Property;}

namespace g{

// internal sealed class qrummy_FuseControlsButtonBase_Text_Property :1
// {
::g::Uno::UX::Property1_type* qrummy_FuseControlsButtonBase_Text_Property_typeof();
void qrummy_FuseControlsButtonBase_Text_Property__ctor_2_fn(qrummy_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name);
void qrummy_FuseControlsButtonBase_Text_Property__Get_fn(qrummy_FuseControlsButtonBase_Text_Property* __this, uString** __retval);
void qrummy_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, qrummy_FuseControlsButtonBase_Text_Property** __retval);
void qrummy_FuseControlsButtonBase_Text_Property__get_Object_fn(qrummy_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void qrummy_FuseControlsButtonBase_Text_Property__Set_fn(qrummy_FuseControlsButtonBase_Text_Property* __this, uString* v, uObject* origin);
void qrummy_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(qrummy_FuseControlsButtonBase_Text_Property* __this, bool* __retval);

struct qrummy_FuseControlsButtonBase_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ButtonBase*> _obj;

    void ctor_2(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name);
    static qrummy_FuseControlsButtonBase_Text_Property* New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
