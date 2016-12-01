// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/.uno/ux11/qrummy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct qrummy_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class qrummy_FuseControlsTextControl_Value_Property :1
// {
::g::Uno::UX::Property1_type* qrummy_FuseControlsTextControl_Value_Property_typeof();
void qrummy_FuseControlsTextControl_Value_Property__ctor_2_fn(qrummy_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void qrummy_FuseControlsTextControl_Value_Property__Get_fn(qrummy_FuseControlsTextControl_Value_Property* __this, uString** __retval);
void qrummy_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, qrummy_FuseControlsTextControl_Value_Property** __retval);
void qrummy_FuseControlsTextControl_Value_Property__get_Object_fn(qrummy_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void qrummy_FuseControlsTextControl_Value_Property__Set_fn(qrummy_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin);
void qrummy_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(qrummy_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct qrummy_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static qrummy_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
