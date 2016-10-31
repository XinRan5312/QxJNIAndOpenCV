package com.capping.xinran.jnitest;

/**
 * Created by houqixin on 16/10/28.
 */
public class JNIUtils {
    static {
        System.loadLibrary("NdkJniDemo");//之前在build.gradle里面设置的so名字，必须一致
    }
    public static native String getStringFormC();
    public static native byte[] getKeyValue();
    public static native byte[] getIv();
}
