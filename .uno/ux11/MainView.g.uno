[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<bool> temp_Value_inst;
    [global::Uno.UX.UXGlobalResource("regular")] public static readonly Fuse.Font regular;
    [global::Uno.UX.UXGlobalResource("Qreader")] public static readonly Qreader Qreader;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MainView()
    {
        regular = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Variane-Script.ttf")));
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
        var temp3 = new Fuse.Reactive.FuseJS.InterApp();
        var temp4 = new Fuse.Reactive.FuseJS.Phone();
        var temp5 = new Fuse.Reactive.FuseJS.Maps();
        var temp6 = new Fuse.Reactive.FuseJS.Email();
        var temp7 = new Fuse.Triggers.BusyTaskModule();
        var temp8 = new Fuse.FileSystem.FileSystemModule();
        var temp9 = new Fuse.Storage.StorageModule();
        var temp10 = new Polyfills.Window.WindowModule();
        var temp11 = new FuseJS.Globals();
        var temp12 = new FuseJS.Lifecycle();
        var temp13 = new FuseJS.Environment();
        var temp14 = new FuseJS.Base64();
        var temp15 = new FuseJS.Bundle();
        var temp16 = new FuseJS.FileReaderImpl();
        var temp17 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Triggers.WhileTrue();
        temp_Value_inst = new qrummy_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp18 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp19 = new Fuse.Controls.ClientPanel();
        var temp20 = new Fuse.Controls.StackPanel();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Controls.Image();
        var temp23 = new Fuse.Controls.Rectangle();
        var temp24 = new Fuse.Controls.Text();
        temp_eb0 = new Fuse.Reactive.EventBinding("load");
        var temp25 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("launchweb");
        var temp26 = new Fuse.Reactive.DataBinding<bool>(temp_Value_inst, "showload");
        temp18.LineNumber = 4;
        temp18.FileName = "MainView.ux";
        temp18.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Main.js"));
        temp19.Children.Add(temp20);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp20.Children.Add(temp23);
        temp20.Children.Add(temp);
        temp21.Value = "Qrummy";
        temp21.FontSize = 60f;
        temp21.Alignment = Fuse.Elements.Alignment.Center;
        temp21.Margin = float4(30f, 30f, 30f, 30f);
        temp21.Font = global::MainView.regular;
        temp22.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
        temp22.Alignment = Fuse.Elements.Alignment.Center;
        temp22.Margin = float4(10f, 10f, 10f, 10f);
        temp22.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../wiki_qr.png"));
        temp23.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp23.Color = float4(0.8f, 0.8f, 0.8f, 1f);
        temp23.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp23.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Gestures.Clicked.AddHandler(temp23, temp_eb0.OnEvent);
        temp23.Children.Add(temp24);
        temp23.Bindings.Add(temp_eb0);
        temp24.Value = "Scan";
        temp24.FontSize = 35f;
        temp24.Alignment = Fuse.Elements.Alignment.Center;
        temp24.Font = global::MainView.regular;
        temp.Nodes.Add(temp25);
        temp.Bindings.Add(temp26);
        temp25.Text = "Load Page";
        temp25.Alignment = Fuse.Elements.Alignment.Center;
        temp25.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp25, temp_eb1.OnEvent);
        temp25.Bindings.Add(temp_eb1);
        __g_nametable.This = this;
        this.Children.Add(temp18);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
