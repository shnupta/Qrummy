[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
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
        var temp = new Fuse.Reactive.FuseJS.Http();
        var temp1 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp2 = new Fuse.Reactive.FuseJS.InterApp();
        var temp3 = new Fuse.Reactive.FuseJS.Phone();
        var temp4 = new Fuse.Reactive.FuseJS.Maps();
        var temp5 = new Fuse.Reactive.FuseJS.Email();
        var temp6 = new Fuse.Triggers.BusyTaskModule();
        var temp7 = new Fuse.FileSystem.FileSystemModule();
        var temp8 = new Fuse.Storage.StorageModule();
        var temp9 = new Polyfills.Window.WindowModule();
        var temp10 = new FuseJS.Globals();
        var temp11 = new FuseJS.Lifecycle();
        var temp12 = new FuseJS.Environment();
        var temp13 = new FuseJS.Base64();
        var temp14 = new FuseJS.Bundle();
        var temp15 = new FuseJS.FileReaderImpl();
        var temp16 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp17 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new Fuse.Controls.ClientPanel();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Fuse.Controls.Image();
        var temp22 = new Fuse.Controls.Rectangle();
        var temp23 = new Fuse.Controls.Text();
        temp_eb0 = new Fuse.Reactive.EventBinding("load");
        var temp24 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("launchweb");
        temp17.LineNumber = 4;
        temp17.FileName = "MainView.ux";
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Main.js"));
        temp18.Children.Add(temp19);
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp19.Children.Add(temp22);
        temp19.Children.Add(temp24);
        temp20.Value = "Qrummy";
        temp20.FontSize = 60f;
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        temp20.Margin = float4(30f, 30f, 30f, 30f);
        temp20.Font = global::MainView.regular;
        temp21.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
        temp21.Alignment = Fuse.Elements.Alignment.Center;
        temp21.Margin = float4(10f, 10f, 10f, 10f);
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../wiki_qr.png"));
        temp22.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp22.Color = float4(0.8f, 0.8f, 0.8f, 1f);
        temp22.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
        temp22.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp22.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Gestures.Clicked.AddHandler(temp22, temp_eb0.OnEvent);
        temp22.Children.Add(temp23);
        temp22.Bindings.Add(temp_eb0);
        temp23.Value = "Scan";
        temp23.FontSize = 35f;
        temp23.Alignment = Fuse.Elements.Alignment.Center;
        temp23.Font = global::MainView.regular;
        temp24.Text = "Load Page";
        temp24.Alignment = Fuse.Elements.Alignment.Center;
        temp24.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb1.OnEvent);
        temp24.Bindings.Add(temp_eb1);
        __g_nametable.This = this;
        this.Children.Add(temp17);
        this.Children.Add(temp18);
    }
}
