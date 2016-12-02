package com.foreign.Fuse.Controls.Native.Android;

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

public class ViewGroup
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Qrummy", (message==null ? "null" : message.toString()));
    }

    public static void AddView196(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.addView(childView);
    }
    
    public static void AddView1197(final Object parentHandle,final Object childHandle,final int index)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.addView(childView, index);
    }
    
    public static Object Create198()
    {
        android.widget.RelativeLayout relativeLayout = new com.fuse.android.views.ViewGroup(com.apps.qrummy.Qrummy.GetRootActivity());
        			relativeLayout.setFocusable(true);
        			relativeLayout.setFocusableInTouchMode(true);
        			relativeLayout.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return relativeLayout;
    }
    
    public static void InstallTouchInterceptCallback199(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        ((com.fuse.android.views.ViewGroup)handle).SetIntercept(new com.fuse.android.views.IInterceptTouchEvent() {
        				public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
        					return callback.run(ev);
        				}
        			});
    }
    
    public static void RemoveView200(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.removeView(childView);
    }
    
    public static void SetChildSize201(final Object handle,final int w,final int h)
    {
        ((android.view.View)handle).setLayoutParams(new android.widget.RelativeLayout.LayoutParams(w, h));
        			((android.view.View)handle).invalidate();
    }
    
    public static void SetClipToBounds202(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        			viewGroup.setClipChildren(clipToBounds);
        			viewGroup.setClipToPadding(clipToBounds);
    }
    
}
