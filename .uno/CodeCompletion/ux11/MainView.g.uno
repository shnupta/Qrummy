[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    [global::Uno.UX.UXGlobalResource("regular")] public static readonly Fuse.Font regular;
    [global::Uno.UX.UXGlobalResource("Qreader")] public static readonly Qreader Qreader;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MainView()
    {
        regular = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Variane-Script.ttf")));
        Qreader = new Qreader();
        global::Uno.UX.Resource.SetGlobalKey(regular, "regular");
        global::Uno.UX.Resource.SetGlobalKey(Qreader, "Qreader");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new Fuse.Reactive.FuseJS.Http();
        var temp2 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp3 = new Fuse.Triggers.BusyTaskModule();
        var temp4 = new Fuse.FileSystem.FileSystemModule();
        var temp5 = new Fuse.Storage.StorageModule();
        var temp6 = new Polyfills.Window.WindowModule();
        var temp7 = new FuseJS.Globals();
        var temp8 = new FuseJS.Lifecycle();
        var temp9 = new FuseJS.Environment();
        var temp10 = new FuseJS.Base64();
        var temp11 = new FuseJS.Bundle();
        var temp12 = new FuseJS.FileReaderImpl();
        var temp13 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new qreader_include_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp14 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new Fuse.Controls.ClientPanel();
        var temp16 = new Fuse.Controls.StackPanel();
        var temp17 = new Fuse.Controls.Text();
        var temp18 = new Fuse.Controls.Image();
        var temp19 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "txt");
        temp_eb0 = new Fuse.Reactive.EventBinding("launchweb");
        var temp20 = new Fuse.Controls.Rectangle();
        var temp21 = new Fuse.Controls.Text();
        temp_eb1 = new Fuse.Reactive.EventBinding("load");
        temp14.LineNumber = 4;
        temp14.FileName = "MainView.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Main.js"));
        temp15.Children.Add(temp16);
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp);
        temp16.Children.Add(temp20);
        temp17.Value = "Qrummy";
        temp17.FontSize = 60f;
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        temp17.Margin = float4(30f, 30f, 30f, 30f);
        temp17.Font = global::MainView.regular;
        temp18.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.Margin = float4(10f, 10f, 10f, 10f);
        temp18.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../wiki_qr.png"));
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(10f, 10f, 10f, 10f);
        global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb0.OnEvent);
        temp.Bindings.Add(temp19);
        temp.Bindings.Add(temp_eb0);
        temp20.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp20.Color = float4(0.8f, 0.8f, 0.8f, 1f);
        temp20.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
        temp20.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Gestures.Clicked.AddHandler(temp20, temp_eb1.OnEvent);
        temp20.Children.Add(temp21);
        temp20.Bindings.Add(temp_eb1);
        temp21.Value = "Scan";
        temp21.FontSize = 35f;
        temp21.Alignment = Fuse.Elements.Alignment.Center;
        temp21.Font = global::MainView.regular;
        __g_nametable.This = this;
        this.Children.Add(temp14);
        this.Children.Add(temp15);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
