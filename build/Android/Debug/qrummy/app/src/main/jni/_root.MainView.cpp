// This file was generated based on /Users/caseywilliams/Documents/Apps/Qrummy/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.Qreader.h>
#include <_root.Qrummy_bundle.h>
#include <_root.Qrummy_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[10];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :12
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    MainView::regular_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::Qrummy_bundle::VarianeScript758bdcce()));
    MainView::Qreader_ = ::g::Qreader::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::regular_, ::STRINGS[1/*"regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Qreader_, ::STRINGS[2/*"Qreader"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("regular");
    ::STRINGS[2] = uString::Const("Qreader");
    ::STRINGS[3] = uString::Const("load");
    ::STRINGS[4] = uString::Const("launchweb");
    ::STRINGS[5] = uString::Const("showload");
    ::STRINGS[6] = uString::Const("MainView.ux");
    ::STRINGS[7] = uString::Const("Qrummy");
    ::STRINGS[8] = uString::Const("Scan");
    ::STRINGS[9] = uString::Const("Load Page");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Qreader_typeof(), (uintptr_t)&::g::MainView::Qreader_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::regular_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 17;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :20
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :24
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :20
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
uSStrong< ::g::Qreader*> MainView::Qreader_;
uSStrong< ::g::Fuse::Font*> MainView::regular_;

// public MainView() [instance] :20
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :24
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp2 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp3 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Phone* temp4 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Reactive::FuseJS::Maps* temp5 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp6 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp7 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp8 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp9 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp10 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp11 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp12 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp13 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp14 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp15 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp16 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp17 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::Qrummy_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp18 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ClientPanel* temp19 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp22 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp24 = ::g::Fuse::Controls::Text::New3();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"load"*/]);
    ::g::Fuse::Controls::Button* temp25 = ::g::Fuse::Controls::Button::New5();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[4/*"launchweb"*/]);
    ::g::Fuse::Reactive::DataBinding* temp26 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<bool>*/], temp_Value_inst, ::STRINGS[5/*"showload"*/]);
    temp18->LineNumber(4);
    temp18->FileName(::STRINGS[6/*"MainView.ux"*/]);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::Qrummy_bundle::Main632aaf06()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp21->Value(::STRINGS[7/*"Qrummy"*/]);
    temp21->FontSize(60.0f);
    temp21->Alignment(10);
    temp21->Margin(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    temp21->Font(MainView::regular());
    temp22->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    temp22->Alignment(10);
    temp22->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp22->File(::g::Uno::UX::BundleFileSource::New1(::g::Qrummy_bundle::wiki_qr68e6b021()));
    temp23->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp23->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp23->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp23->Alignment(10);
    temp23->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp23, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp24->Value(::STRINGS[8/*"Scan"*/]);
    temp24->FontSize(35.0f);
    temp24->Alignment(10);
    temp24->Font(MainView::regular());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp25->Text(::STRINGS[9/*"Load Page"*/]);
    temp25->Alignment(10);
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 10.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp25, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public MainView New() [static] :20
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
