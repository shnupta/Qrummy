// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.Qreader.h>
#include <_root.qrummy_bundle.h>
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
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[8];
static uType* TYPES[4];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :11
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView::regular_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::qrummy_bundle::VarianeScriptaa14cd2e()));
    MainView::Qreader_ = ::g::Qreader::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::regular_, ::STRINGS[0/*"regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Qreader_, ::STRINGS[1/*"Qreader"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("regular");
    ::STRINGS[1] = uString::Const("Qreader");
    ::STRINGS[2] = uString::Const("load");
    ::STRINGS[3] = uString::Const("launchweb");
    ::STRINGS[4] = uString::Const("MainView.ux");
    ::STRINGS[5] = uString::Const("Qrummy");
    ::STRINGS[6] = uString::Const("Scan");
    ::STRINGS[7] = uString::Const("Load Page");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Qreader_typeof(), (uintptr_t)&::g::MainView::Qreader_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::regular_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 15;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :19
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :23
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :19
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
uSStrong< ::g::Qreader*> MainView::Qreader_;
uSStrong< ::g::Fuse::Font*> MainView::regular_;

// public MainView() [instance] :19
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::Http* temp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp1 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp2 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Phone* temp3 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Reactive::FuseJS::Maps* temp4 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp5 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp6 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp7 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp8 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp9 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp10 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp11 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp12 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp13 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp14 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp15 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp16 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ClientPanel* temp18 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"load"*/]);
    ::g::Fuse::Controls::Button* temp24 = ::g::Fuse::Controls::Button::New5();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"launchweb"*/]);
    temp17->LineNumber(4);
    temp17->FileName(::STRINGS[4/*"MainView.ux"*/]);
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::qrummy_bundle::Main5482fe66()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp20->Value(::STRINGS[5/*"Qrummy"*/]);
    temp20->FontSize(60.0f);
    temp20->Alignment(10);
    temp20->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp20->Font(MainView::regular());
    temp21->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    temp21->Alignment(10);
    temp21->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::qrummy_bundle::wiki_qr11949101()));
    temp22->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp22->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp22->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp22->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp22->Alignment(10);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp22, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp23->Value(::STRINGS[6/*"Scan"*/]);
    temp23->FontSize(35.0f);
    temp23->Alignment(10);
    temp23->Font(MainView::regular());
    temp24->Text(::STRINGS[7/*"Load Page"*/]);
    temp24->Alignment(10);
    temp24->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp24, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public MainView New() [static] :19
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
