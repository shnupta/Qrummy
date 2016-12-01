// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/.uno/ux11/qrummy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.qrummy_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class qrummy_FuseTriggersWhileBool_Value_Property :1
// {
static void qrummy_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::qrummy_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* qrummy_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(qrummy_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("qrummy_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = qrummy_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))qrummy_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))qrummy_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))qrummy_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))qrummy_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public qrummy_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :4
void qrummy_FuseTriggersWhileBool_Value_Property__ctor_2_fn(qrummy_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :6
void qrummy_FuseTriggersWhileBool_Value_Property__Get_fn(qrummy_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public qrummy_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :4
void qrummy_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, qrummy_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = qrummy_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void qrummy_FuseTriggersWhileBool_Value_Property__get_Object_fn(qrummy_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :7
void qrummy_FuseTriggersWhileBool_Value_Property__Set_fn(qrummy_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :8
void qrummy_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(qrummy_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public qrummy_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :4
void qrummy_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public qrummy_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :4
qrummy_FuseTriggersWhileBool_Value_Property* qrummy_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    qrummy_FuseTriggersWhileBool_Value_Property* obj1 = (qrummy_FuseTriggersWhileBool_Value_Property*)uNew(qrummy_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
