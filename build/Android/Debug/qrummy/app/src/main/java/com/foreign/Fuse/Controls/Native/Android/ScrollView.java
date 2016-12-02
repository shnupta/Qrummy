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

public class ScrollView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Qrummy", (message==null ? "null" : message.toString()));
    }

    public static Object AddCallback120(final UnoObject _this, final Object handle)
    {
        com.fuse.android.views.IScroll iscroll = new com.fuse.android.views.IScroll() {
        				public void OnScrollChanged(int x, int y, int oldX, int oldY) {
        					ExternedBlockHost.callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged121((UnoObject)_this,(int)x,(int)y,(int)oldX,(int)oldY);
        				}
        			};
        			((com.fuse.android.views.VerticalScrollView)handle).SetIScroll(iscroll);
        			return iscroll;
    }
    
    public static Object Create122()
    {
        return new com.fuse.android.views.VerticalScrollView(com.apps.qrummy.Qrummy.GetRootActivity());
    }
    
    public static void SetChildSize123(final Object handle,final int w,final int h)
    {
        ((android.view.View)handle).setLayoutParams(new android.widget.FrameLayout.LayoutParams(w, h));
        			((android.view.View)handle).invalidate();
    }
    
    public static void SetClipToBounds124(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        			viewGroup.setClipChildren(clipToBounds);
        			viewGroup.setClipToPadding(clipToBounds);
    }
    
    public static void SetContent125(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			viewGroup.removeAllViews();
        
        			if (childHandle != null)
        			{
        				android.view.View childView = (android.view.View)childHandle;
        				viewGroup.addView(childView);
        			}
    }
    
    public static void SetScrollPosition126(final Object handle,final int x,final int y)
    {
        android.widget.ScrollView sv = (android.widget.ScrollView)handle;
        			sv.setScrollX(x);
        			sv.setScrollY(y);
    }
    
}
