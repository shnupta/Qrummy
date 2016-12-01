package com.Bindings;

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
public class ExternedBlockHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("qrummy", (message==null ? "null" : message.toString()));
    }
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(final Object jarr,long jarrPtr);
    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.boolArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(final Object jarr,long jarrPtr);
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.byteArrayToUnoArrayPtr(arr);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(final UnoObject array);
    public static Object copyBoolArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyBoolArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(final UnoObject array);
    public static Object copyByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyByteArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(final UnoObject array);
    public static Object copyCharArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyCharArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(final UnoObject array);
    public static Object copyDoubleArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyDoubleArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(final UnoObject array);
    public static Object copyFloatArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyFloatArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(final UnoObject array);
    public static Object copyIntArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyIntArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(final UnoObject array);
    public static Object copyLongArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyLongArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(final UnoObject array);
    public static Object copyObjectArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyObjectArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(final UnoObject array);
    public static Object copyShortArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyShortArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(final UnoObject array);
    public static Object copyStringArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyStringArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(final UnoObject array);
    public static Object copyUByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyUByteArray(array);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(final Object jarr,long jarrPtr);
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.doubleArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(final Object jarr,long jarrPtr);
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.floatArrayToUnoArrayPtr(arr);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(final UnoObject array,final int index);
    public static boolean getBool(final UnoObject array,final int index)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getBool(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(final UnoObject array,final int index);
    public static byte getByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getByte(array,index);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(final UnoObject array,final int index);
    public static char getChar(final UnoObject array,final int index)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getChar(array,index);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(final UnoObject array,final int index);
    public static double getDouble(final UnoObject array,final int index)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getDouble(array,index);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(final UnoObject array,final int index);
    public static float getFloat(final UnoObject array,final int index)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getFloat(array,index);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(final UnoObject array,final int index);
    public static int getInt(final UnoObject array,final int index)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getInt(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(final UnoObject array,final int index);
    public static long getLong(final UnoObject array,final int index)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getLong(array,index);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(final UnoObject array,final int index);
    public static UnoObject getObject(final UnoObject array,final int index)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getObject(array,index);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(final UnoObject array,final int index);
    public static short getShort(final UnoObject array,final int index)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getShort(array,index);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(final UnoObject array,final int index);
    public static String getString(final UnoObject array,final int index)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getString(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(final UnoObject array,final int index);
    public static byte getUByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getUByte(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(final Object jarr,long jarrPtr);
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.intArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(final Object jarr,long jarrPtr);
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.longArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(final int length);
    public static long newBoolArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newBoolArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(final int length,final boolean unoIsUnsigned);
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newByteArrayPtr(length,unoIsUnsigned);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(final int length);
    public static long newCharArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newCharArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(final int length);
    public static long newDoubleArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newDoubleArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(final int length);
    public static long newFloatArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newFloatArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(final int length);
    public static long newIntArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newIntArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(final int length);
    public static long newLongArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newLongArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(final int length);
    public static long newObjectArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newObjectArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(final int length);
    public static long newShortArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newShortArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(final int length);
    public static long newStringArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newStringArrayPtr(length);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(final UnoObject array,final int index,final boolean val);
    public static boolean setBool(final UnoObject array,final int index,final boolean val)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setBool(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(final UnoObject array,final int index,final byte val);
    public static byte setByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setByte(array,index,val);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(final UnoObject array,final int index,final char val);
    public static char setChar(final UnoObject array,final int index,final char val)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setChar(array,index,val);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(final UnoObject array,final int index,final double val);
    public static double setDouble(final UnoObject array,final int index,final double val)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setDouble(array,index,val);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(final UnoObject array,final int index,final float val);
    public static float setFloat(final UnoObject array,final int index,final float val)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setFloat(array,index,val);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(final UnoObject array,final int index,final int val);
    public static int setInt(final UnoObject array,final int index,final int val)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setInt(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(final UnoObject array,final int index,final long val);
    public static long setLong(final UnoObject array,final int index,final long val)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setLong(array,index,val);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(final UnoObject array,final int index,final UnoObject val);
    public static UnoObject setObject(final UnoObject array,final int index,final UnoObject val)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setObject(array,index,val);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(final UnoObject array,final int index,final short val);
    public static short setShort(final UnoObject array,final int index,final short val)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setShort(array,index,val);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(final UnoObject array,final int index,final String val);
    public static String setString(final UnoObject array,final int index,final String val)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setString(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(final UnoObject array,final int index,final byte val);
    public static byte setUByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setUByte(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(final Object jarr,long jarrPtr);
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.shortArrayToUnoArrayPtr(arr);
    }
    
    public static native void callUno_Uno_Collections_List_lt_string_gt__Add51(final UnoObject jthis,final String item);
    public static boolean JavaGetLocalAddresses50(final UnoObject addresses)
    {
        return (boolean) com.foreign.Uno.Net.Dns.JavaGetLocalAddresses50(addresses);
    }
    
    public static native void callUno_Uno_Permissions_Permissions_Failed52(final UnoObject promise);
    public static void permissionRequestFailed(final UnoObject x)
    {
        com.foreign.Uno.Permissions.Permissions.permissionRequestFailed(x);
    }
    
    public static native void callUno_Uno_Permissions_Permissions_Succeeded53(final UnoObject promise);
    public static void permissionRequestSucceeded(final UnoObject x)
    {
        com.foreign.Uno.Permissions.Permissions.permissionRequestSucceeded(x);
    }
    
    public static void requestPermission54(final UnoObject promise,final String permissionName)
    {
        com.foreign.Uno.Permissions.Permissions.requestPermission54(promise,permissionName);
    }
    
    public static void requestPermissions55(final UnoObject promise,final com.uno.StringArray permissionNames)
    {
        com.foreign.Uno.Permissions.Permissions.requestPermissions55(promise,permissionNames);
    }
    
    public static boolean shouldShowInformation56(final String x)
    {
        return (boolean) com.foreign.Uno.Permissions.Permissions.shouldShowInformation56(x);
    }
    
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFamily58(final String name,final String language,final String variant);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFont59(final String path,final int index,final int weight,final boolean isItalic);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddAlias60(final String name,final String to,final int weight);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_ThrowUno61(final String message);
    public static void AddFonts57()
    {
        com.foreign.Fuse.Internal.AndroidSystemFont.AddFonts57();
    }
    
    public static Object Create62()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Button.Create62();
    }
    
    public static void SetText63(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.Button.SetText63(handle,text);
    }
    
    public static void UpdateShapeDrawable164(final UnoObject _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        com.foreign.Fuse.Controls.Native.Android.Circle.UpdateShapeDrawable164(_this, handle,useAngle,width,height,startAngle,endAngle);
    }
    
    public static void AddView65(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView65(parentHandle,childHandle);
    }
    
    public static void AddView166(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView166(parentHandle,childHandle,index);
    }
    
    public static Object Create67()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.Create67();
    }
    
    public static void HideOffscreenParent68(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.HideOffscreenParent68(handle);
    }
    
    public static void RemoveView69(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.RemoveView69(parentHandle,childHandle);
    }
    
    public static void SetChildSize70(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetChildSize70(handle,w,h);
    }
    
    public static void SetClipToBounds71(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetClipToBounds71(handle,clipToBounds);
    }
    
    public static void UpdateShapeDrawable172(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Ellipse.UpdateShapeDrawable172(_this, handle);
    }
    
    public static void ClearListener73(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.ClearListener73(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange75(final UnoObject jthis,final boolean hasFocus);
    public static Object Create74(final UnoObject _this)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.Create74(_this);
    }
    
    public static void SetListener76(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.SetListener76(viewHandle,listenerHandle);
    }
    
    public static Object GetContext77(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetContext77(viewHandle);
    }
    
    public static Object GetWindowToken78(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetWindowToken78(viewHandle);
    }
    
    public static boolean HasFocus79(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.FocusManager.HasFocus79(viewHandle);
    }
    
    public static void RequestRootViewFocus80(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusManager.RequestRootViewFocus80(viewHandle);
    }
    
    public static native void callUno_Action_Object(final com.foreign.Uno.Action_Object theDelegate,final Object arg,long argPtr);
    public static native void callUno_Action_String(final com.foreign.Uno.Action_String theDelegate,final String arg);
    public static void LoadAsync81(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        com.foreign.Fuse.Controls.Native.Android.HttpImageLoader.LoadAsync81(urlString,success,error);
    }
    
    public static void ClearBitmap82(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.ClearBitmap82(handle);
    }
    
    public static Object Create83(final Object container)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.Create83(container);
    }
    
    public static Object CreateContainer84()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.CreateContainer84();
    }
    
    public static void GetImageSize85(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.GetImageSize85(handle,wh);
    }
    
    public static void SetBitmap86(final Object handle,final Object bitmapHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetBitmap86(handle,bitmapHandle);
    }
    
    public static void SetImageMatrix87(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageMatrix87(handle,x,y,scaleX,scaleY);
    }
    
    public static void SetImageSize188(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageSize188(handle,wh);
    }
    
    public static void SetTint89(final Object handle,final int rgba)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetTint89(handle,rgba);
    }
    
    public static void ClearOnTouchListener90(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.ClearOnTouchListener90(viewHandle);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch92(final Object view,final Object motionEvent,long viewPtr,long motionEventPtr);
    public static Object CreateTouchListener91()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.InputDispatch.CreateTouchListener91();
    }
    
    public static void SetOnTouchListener93(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.SetOnTouchListener93(viewHandle,listenerHandle);
    }
    
    public static boolean ContainsKey194(final Object handle,final Object key)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.JavaMap.ContainsKey194(handle,key);
    }
    
    public static Object Create95()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.JavaMap.Create95();
    }
    
    public static UnoObject Get196(final Object handle,final Object key)
    {
        return (UnoObject) com.foreign.Fuse.Controls.Native.Android.JavaMap.Get196(handle,key);
    }
    
    public static void Put97(final Object handle,final Object key,final UnoObject value)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Put97(handle,key,value);
    }
    
    public static void Remove198(final Object handle,final Object key)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Remove198(handle,key);
    }
    
    public static int GetMeasuredHeight99(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredHeight99(handle);
    }
    
    public static int GetMeasuredWidth100(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredWidth100(handle);
    }
    
    public static void Measure101(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        com.foreign.Fuse.Controls.Native.Android.LeafView.Measure101(handle,w,h,hasX,hasY);
    }
    
    public static boolean Compare102(final Object handle1,final Object handle2)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.MotionEvent.Compare102(handle1,handle2);
    }
    
    public static int GetAction103(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetAction103(_this, handle);
    }
    
    public static int GetActionMasked104(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetActionMasked104(_this, handle);
    }
    
    public static long GetEventTime105(final UnoObject _this, final Object handle)
    {
        return (long) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetEventTime105(_this, handle);
    }
    
    public static int GetLocationOnScreenX106(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenX106(_this, viewHandle);
    }
    
    public static int GetLocationOnScreenY107(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenY107(_this, viewHandle);
    }
    
    public static int GetPointerCount108(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerCount108(_this, handle);
    }
    
    public static int GetPointerId1109(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerId1109(_this, handle,pointerIndex);
    }
    
    public static int GetPointerIndexMask110()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexMask110();
    }
    
    public static int GetPointerIndexShift111()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexShift111();
    }
    
    public static float GetX112(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetX112(_this, handle,pointerIndex);
    }
    
    public static float GetXPrecision113(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetXPrecision113(_this, handle);
    }
    
    public static float GetY114(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetY114(_this, handle,pointerIndex);
    }
    
    public static float GetYPrecision115(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetYPrecision115(_this, handle);
    }
    
    public static Object CreateBitmap116(final int w,final int h)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.CreateBitmap116(w,h);
    }
    
    public static void DisposeBitmap117(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.DisposeBitmap117(bitmap);
    }
    
    public static void Upload118(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.Upload118(viewHandle,bitmapHandle,reuse,w,h);
    }
    
    public static void UpdateShapeDrawable1119(final UnoObject _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        com.foreign.Fuse.Controls.Native.Android.Rectangle.UpdateShapeDrawable1119(_this, handle,x,y,z,w);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged121(final UnoObject jthis,final int x,final int y,final int oldx,final int oldy);
    public static Object AddCallback120(final UnoObject _this, final Object handle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.AddCallback120(_this, handle);
    }
    
    public static Object Create122()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.Create122();
    }
    
    public static void SetChildSize123(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetChildSize123(handle,w,h);
    }
    
    public static void SetClipToBounds124(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetClipToBounds124(handle,clipToBounds);
    }
    
    public static void SetContent125(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetContent125(parentHandle,childHandle);
    }
    
    public static void SetScrollPosition126(final Object handle,final int x,final int y)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetScrollPosition126(handle,x,y);
    }
    
    public static Object Create127()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.Create127();
    }
    
    public static Object CreateShapeDrawable128()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.CreateShapeDrawable128();
    }
    
    public static Object GetLayer129(final Object handle,final int layer)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.GetLayer129(handle,layer);
    }
    
    public static Object MakeLayerDrawable130(final Object handle,final int layerCount)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.MakeLayerDrawable130(handle,layerCount);
    }
    
    public static void SetShapeDrawableColor131(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableColor131(shapeDrawable,r,g,b,a,opacity);
    }
    
    public static void SetShapeDrawableLinearGradient132(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableLinearGradient132(shapeDrawable,startX,startY,endX,endY,colors,positions);
    }
    
    public static void SetShapeDrawableStrokeWidth133(final Object shapeDrawable,final float width)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableStrokeWidth133(shapeDrawable,width);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged135(final UnoObject jthis,final double newProgress);
    public static void AddChangedCallback134(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.AddChangedCallback134(_this, handle);
    }
    
    public static Object Create136()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Slider.Create136();
    }
    
    public static void SetProgress137(final Object handle,final double progress)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.SetProgress137(handle,progress);
    }
    
    public static void HideKeyboard138(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.HideKeyboard138(hideKeyboardContext,hideKeyboardWindowToken);
    }
    
    public static void ShowKeyboard139(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.ShowKeyboard139(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded141(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged142(final UnoObject jthis,final Object holder,final int f,final int w,final int h,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated143(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed144(final UnoObject jthis,final Object holder,long holderPtr);
    public static void AddCallback140(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.SurfaceView.AddCallback140(_this, handle);
    }
    
    public static Object Create145()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.Create145();
    }
    
    public static Object GetSurface146(final Object holder)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.GetSurface146(holder);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged148(final UnoObject jthis,final boolean value);
    public static void AddCallback147(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.AddCallback147(_this, handle);
    }
    
    public static Object Create149()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Switch.Create149();
    }
    
    public static void SetValue150(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.SetValue150(handle,value);
    }
    
    public static void MakeItPlain151(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEdit.MakeItPlain151(handle);
    }
    
    public static void CopyState152(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CopyState152(container,sourceHandle,targetHandle);
    }
    
    public static Object CreateContainer153()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateContainer153();
    }
    
    public static Object CreateTextEdit154()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateTextEdit154();
    }
    
    public static void AddView155(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.AddView155(parentHandle,childHandle);
    }
    
    public static Object Create156()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.Create156();
    }
    
    public static void RemoveView157(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.RemoveView157(parentHandle,childHandle);
    }
    
    public static void SetChildSize158(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.SetChildSize158(handle,w,h);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction160(final UnoObject jthis,final int actionCode);
    public static void AddEditorActionListener159(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddEditorActionListener159(_this, handle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged162(final UnoObject jthis,final String value);
    public static void AddTextChangedListener161(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddTextChangedListener161(_this, handle);
    }
    
    public static void ClearFocus163(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.ClearFocus163(handle);
    }
    
    public static Object Create1164()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextInput.Create1164();
    }
    
    public static boolean HasFocus165(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.TextInput.HasFocus165(viewHandle);
    }
    
    public static void RequestFocus166(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.RequestFocus166(viewHandle);
    }
    
    public static void SetCursorDrawableColor167(final UnoObject _this, final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetCursorDrawableColor167(_this, handle,color);
    }
    
    public static void SetImeOptions168(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetImeOptions168(handle,value);
    }
    
    public static void SetInputType169(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetInputType169(handle,value);
    }
    
    public static void SetPlaceholderColor170(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderColor170(handle,value);
    }
    
    public static void SetPlaceholderText171(final Object handle,final String value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderText171(handle,value);
    }
    
    public static void SetSelectionColor172(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetSelectionColor172(handle,color);
    }
    
    public static Object Create173()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextView.Create173();
    }
    
    public static void SetFont174(final Object handle,final Object fontHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFont174(handle,fontHandle);
    }
    
    public static void SetFontSize175(final Object handle,final float size)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFontSize175(handle,size);
    }
    
    public static void SetLineSpacing176(final Object handle,final float spacing)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetLineSpacing176(handle,spacing);
    }
    
    public static void SetMaxLength177(final Object handle,final int maxLength)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetMaxLength177(handle,maxLength);
    }
    
    public static void SetText178(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetText178(handle,text);
    }
    
    public static void SetTextAlignment179(final Object handle,final int alignment)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextAlignment179(handle,alignment);
    }
    
    public static void SetTextColor180(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextColor180(handle,color);
    }
    
    public static void SetTextWrapping181(final Object handle,final boolean wrap)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextWrapping181(handle,wrap);
    }
    
    public static Object CreateFromBundleFile182(final String bundlePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromBundleFile182(bundlePath);
    }
    
    public static Object CreateFromFileImpl183(final String path)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromFileImpl183(path);
    }
    
    public static Object GetDefault184()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.GetDefault184();
    }
    
    public static void BringToFront1185(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.View.BringToFront1185(handle);
    }
    
    public static void SetBackground186(final Object handle,final int argb)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetBackground186(handle,argb);
    }
    
    public static void SetEnabled187(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetEnabled187(handle,value);
    }
    
    public static void SetOpacity188(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetOpacity188(handle,value);
    }
    
    public static void SetPivotXY189(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetPivotXY189(handle,x,y);
    }
    
    public static void SetRotation190(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotation190(handle,value);
    }
    
    public static void SetRotationX191(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationX191(handle,value);
    }
    
    public static void SetRotationY192(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationY192(handle,value);
    }
    
    public static void SetScaleXY193(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetScaleXY193(handle,x,y);
    }
    
    public static void SetTranslation194(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetTranslation194(handle,x,y);
    }
    
    public static void SetVisible195(final Object handle,final boolean isVisible)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetVisible195(handle,isVisible);
    }
    
    public static void AddView196(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView196(parentHandle,childHandle);
    }
    
    public static void AddView1197(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView1197(parentHandle,childHandle,index);
    }
    
    public static Object Create198()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ViewGroup.Create198();
    }
    
    public static native boolean callUno_Func_Object(final com.foreign.Uno.Func_Object theDelegate,final Object arg,long argPtr);
    public static void InstallTouchInterceptCallback199(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.InstallTouchInterceptCallback199(handle,callback);
    }
    
    public static void RemoveView200(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.RemoveView200(parentHandle,childHandle);
    }
    
    public static void SetChildSize201(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetChildSize201(handle,w,h);
    }
    
    public static void SetClipToBounds202(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetClipToBounds202(handle,clipToBounds);
    }
    
    public static Object Download1203(final String url)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.ImageHandlePromise.Download1203(url);
    }
    
    public static Object LoadFile204(final String filePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadFile204(filePath);
    }
    
    public static Object LoadUri205(final String uri)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadUri205(uri);
    }
    
    public static void Release206(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.ImageLoader.Release206(bitmap);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared208(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion209(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError210(final UnoObject jthis,final int what,final int extra);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer211(final UnoObject jthis,final int percent);
    public static Object CreateMediaPlayer207(final UnoObject _this, final Object surfaceHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateMediaPlayer207(_this, surfaceHandle);
    }
    
    public static Object CreateSurface212(final UnoObject _this, final Object surfaceTexture)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurface212(_this, surfaceTexture);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable214(final UnoObject jthis);
    public static Object CreateSurfaceTexture213(final UnoObject _this, final int glHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurfaceTexture213(_this, glHandle);
    }
    
    public static void Dispose1215(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Dispose1215(mediaplayerHandle,surfaceHandle,surfaceTextureHandle);
    }
    
    public static int GetCurrentPosition216(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetCurrentPosition216(handle);
    }
    
    public static int GetDuration217(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetDuration217(handle);
    }
    
    public static int GetHeight218(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetHeight218(handle);
    }
    
    public static int GetOrientation219(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetOrientation219(handle);
    }
    
    public static int GetWidth220(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetWidth220(handle);
    }
    
    public static boolean IsHardwareAccelerated221()
    {
        return (boolean) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.IsHardwareAccelerated221();
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred223(final UnoObject jthis,final String msg);
    public static void LoadAsyncAsset222(final UnoObject _this, final Object handle,final String assetName)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncAsset222(_this, handle,assetName);
    }
    
    public static void LoadAsyncUrl224(final UnoObject _this, final Object handle,final String url)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncUrl224(_this, handle,url);
    }
    
    public static void Pause1225(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Pause1225(handle);
    }
    
    public static void Play1226(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Play1226(handle);
    }
    
    public static void SeekTo227(final Object handle,final int position)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SeekTo227(handle,position);
    }
    
    public static void SetVolume228(final Object handle,final float left,final float right)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SetVolume228(handle,left,right);
    }
    
    public static void UpdateTexture1229(final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.UpdateTexture1229(surfaceTextureHandle);
    }
    
    public static Object Create230(final String text)
    {
        return (Object) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.Create230(text);
    }
    
    public static int GetBaseLevel231(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetBaseLevel231(handle);
    }
    
    public static int GetRunCount232(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunCount232(handle);
    }
    
    public static int GetRunLevel233(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLevel233(handle,run);
    }
    
    public static int GetRunLimit234(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLimit234(handle,run);
    }
    
    public static int GetRunStart235(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunStart235(handle,run);
    }
    
    public static void AddJavascriptInterface236(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.AddJavascriptInterface236(handle,name,resultHandler);
    }
    
    public static boolean CanGoBack237(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoBack237(handle);
    }
    
    public static boolean CanGoForward238(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoForward238(handle);
    }
    
    public static native void callUno_Action_int(final com.foreign.Uno.Action_int theDelegate,final int arg);
    public static Object CreateAndSetWebChromeClient239(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebChromeClient239(webViewHandle,onProgress);
    }
    
    public static native void callUno_Action(final com.foreign.Uno.Action theDelegate);
    public static Object CreateAndSetWebViewClient240(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebViewClient240(webViewHandle,loaded,started,changed);
    }
    
    public static Object CreateWebView241()
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateWebView241();
    }
    
    public static double GetProgress242(final Object handle)
    {
        return (double) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetProgress242(handle);
    }
    
    public static String GetTitle243(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetTitle243(handle);
    }
    
    public static String GetUrl244(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetUrl244(handle);
    }
    
    public static void GoBack245(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoBack245(handle);
    }
    
    public static void GoForward246(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoForward246(handle);
    }
    
    public static void LoadHtml247(final Object handle,final String html,final String baseUrl)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadHtml247(handle,html,baseUrl);
    }
    
    public static void LoadUrl248(final Object handle,final String url)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadUrl248(handle,url);
    }
    
    public static void Reload249(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.Reload249(handle);
    }
    
    public static void StopLoading250(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.StopLoading250(handle);
    }
    
    public static void ClearRootView251(final Object handle)
    {
        com.foreign.Fuse.Android.AppRoot.ClearRootView251(handle);
    }
    
    public static native void callUno_Fuse_Android_AppRoot_OnTouchEvent__253(final Object motionEvent,long motionEventPtr);
    public static Object CreateRootView252()
    {
        return (Object) com.foreign.Fuse.Android.AppRoot.CreateRootView252();
    }
    
    public static void SetChildSize1254(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Android.AppRoot.SetChildSize1254(handle,w,h);
    }
    
    public static void SetRootView255(final Object handle,final Object rootHandle)
    {
        com.foreign.Fuse.Android.AppRoot.SetRootView255(handle,rootHandle);
    }
    
    public static Object CreateBitmapARGB8888Impl256(final int width,final int height)
    {
        return (Object) com.foreign.Fuse.Android.Bitmap.CreateBitmapARGB8888Impl256(width,height);
    }
    
    public static void EraseColor1257(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.Bitmap.EraseColor1257(handle,color);
    }
    
    public static void Recycle1258(final Object handle)
    {
        com.foreign.Fuse.Android.Bitmap.Recycle1258(handle);
    }
    
    public static Object Create259(final Object bitmapHandle)
    {
        return (Object) com.foreign.Fuse.Android.Canvas.Create259(bitmapHandle);
    }
    
    public static void Translate1260(final Object handle,final float dx,final float dy)
    {
        com.foreign.Fuse.Android.Canvas.Translate1260(handle,dx,dy);
    }
    
    public static void TexImage2D261(final int target,final int level,final Object bitmap,final int border)
    {
        com.foreign.Fuse.Android.GLUtils.TexImage2D261(target,level,bitmap,border);
    }
    
    public static Object Create262(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create262(text,bufStart,bufEnd,paintHandle,outerWidth,align,spacingMult,spacingAdd,includePad,truncateAt,ellipsizedWith);
    }
    
    public static Object Create1263(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create1263(text,paintHandle,width,align,spacingMult,spacingAdd,includePad);
    }
    
    public static void Draw1264(final Object layoutHandle,final Object canvasHandle)
    {
        com.foreign.Fuse.Android.StaticLayout.Draw1264(layoutHandle,canvasHandle);
    }
    
    public static float GetDesiredWidthImpl265(final String text,final Object paintHandle)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetDesiredWidthImpl265(text,paintHandle);
    }
    
    public static int GetEllipsizedWidth266(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetEllipsizedWidth266(handle);
    }
    
    public static int GetHeight267(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetHeight267(handle);
    }
    
    public static int GetLineBaseline1268(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineBaseline1268(handle,line);
    }
    
    public static int GetLineCount269(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineCount269(handle);
    }
    
    public static int GetLineEnd1270(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineEnd1270(handle,line);
    }
    
    public static float GetLineLeft1271(final Object handle,final int line)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetLineLeft1271(handle,line);
    }
    
    public static int GetLineStart1272(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineStart1272(handle,line);
    }
    
    public static int GetWidth273(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetWidth273(handle);
    }
    
    public static int GetStatusBarColor274()
    {
        return (int) com.foreign.Fuse.Android.StatusBarHelper.GetStatusBarColor274();
    }
    
    public static native void callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar276();
    public static void InstallGlobalListener275()
    {
        com.foreign.Fuse.Android.StatusBarHelper.InstallGlobalListener275();
    }
    
    public static void SetStatusBarColor277(final int color)
    {
        com.foreign.Fuse.Android.StatusBarHelper.SetStatusBarColor277(color);
    }
    
    public static Object Create278()
    {
        return (Object) com.foreign.Fuse.Android.TextPaint.Create278();
    }
    
    public static void GetTextBounds279(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        com.foreign.Fuse.Android.TextPaint.GetTextBounds279(handle,text,start,end,r);
    }
    
    public static void SetAntiAlias280(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Android.TextPaint.SetAntiAlias280(handle,value);
    }
    
    public static void SetColor281(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.TextPaint.SetColor281(handle,color);
    }
    
    public static void SetTextSize282(final Object handle,final float textSize)
    {
        com.foreign.Fuse.Android.TextPaint.SetTextSize282(handle,textSize);
    }
    
    public static void SetTypeface283(final Object paintHandle,final Object typefaceHandle)
    {
        com.foreign.Fuse.Android.TextPaint.SetTypeface283(paintHandle,typefaceHandle);
    }
    
    public static String GetCacheDirectory284()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetCacheDirectory284();
    }
    
    public static String GetExternalCacheDirectory285()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalCacheDirectory285();
    }
    
    public static String GetExternalFilesDirectory286()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalFilesDirectory286();
    }
    
    public static String GetFilesDirectory287()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetFilesDirectory287();
    }
    
    public static String GetCacheDirectory288()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetCacheDirectory288();
    }
    
    public static String GetDataDirectory289()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetDataDirectory289();
    }
    
    public static int GetBuildVersion290()
    {
        return (int) com.foreign.Fuse.AndroidProperties.GetBuildVersion290();
    }
    
    public static String GetReleaseVersion291()
    {
        return (String) com.foreign.Fuse.AndroidProperties.GetReleaseVersion291();
    }
    
    public static native void callUno_Fuse_App_OnFrameCallback293(final UnoObject jthis,final double currentTime,final double deltaTime);
    public static void StartFrameCallback292(final UnoObject _this)
    {
        com.foreign.Fuse.App.StartFrameCallback292(_this);
    }
    
    public static void _launchCall294(final String uri)
    {
        com.foreign.Fuse.Launcher._launchCall294(uri);
    }
    
    public static void _launchEmail295(final String uri)
    {
        com.foreign.Fuse.Launcher._launchEmail295(uri);
    }
    
    public static void _launchMapsAndroid296(final String uri)
    {
        com.foreign.Fuse.Launcher._launchMapsAndroid296(uri);
    }
    
    public static void LaunchUriAndroid297(final String uri)
    {
        com.foreign.Fuse.Launcher.LaunchUriAndroid297(uri);
    }
    
    public static Object Init298()
    {
        return (Object) com.foreign.QreaderImpl.Init298();
    }
    
    public static native int callUno_QreaderImpl_RC_BARCODE_CAPTUREGet300();
    public static native void callUno_QreaderImpl_Picked301(final String result);
    public static native void callUno_QreaderImpl_Cancelled302();
    public static boolean OnRecieved299(final int requestCode,final int resultCode,final Object data)
    {
        return (boolean) com.foreign.QreaderImpl.OnRecieved299(requestCode,resultCode,data);
    }
    
    public static void ScannerImpl303()
    {
        com.foreign.QreaderImpl.ScannerImpl303();
    }
    
}
