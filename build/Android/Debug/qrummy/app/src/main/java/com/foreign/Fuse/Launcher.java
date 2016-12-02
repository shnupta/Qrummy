package com.foreign.Fuse;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.content.Intent;
import android.net.Uri;
import android.app.Activity;

public class Launcher
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Qrummy", (message==null ? "null" : message.toString()));
    }

    public static void _launchCall294(final String uri)
    {
        Intent callIntent = new Intent(Intent.ACTION_CALL);
        			callIntent.setData(Uri.parse(uri));
        			Activity a = com.fuse.Activity.getRootActivity();
        			a.startActivity(callIntent);
    }
    
    public static void _launchEmail295(final String uri)
    {
        Intent mailIntent = new Intent(Intent.ACTION_SENDTO);
        			mailIntent.setData(Uri.parse(uri));
        
        			Activity a = com.fuse.Activity.getRootActivity();
        			a.startActivity(mailIntent);
    }
    
    public static void _launchMapsAndroid296(final String uri)
    {
        Intent mapIntent = new Intent(Intent.ACTION_VIEW);
        			mapIntent.setData(Uri.parse(uri));
        			mapIntent.setClassName("com.google.android.apps.maps", "com.google.android.maps.MapsActivity");
        			try
        			{
        				com.fuse.Activity.getRootActivity().startActivity(mapIntent);
        			}
        			catch ( 	android.content.ActivityNotFoundException e)
        			{
        				// ignore this error. Keeps behaviour in line with iOS
        			}
    }
    
    public static void LaunchUriAndroid297(final String uri)
    {
        Intent callIntent = new Intent(Intent.ACTION_VIEW);
        			callIntent.setData(Uri.parse(uri));
        			Activity a = com.fuse.Activity.getRootActivity();
        			try {
        				a.startActivity(callIntent);
        			} catch (Exception e) {
        				// ignore
        			}
    }
    
}
