//
// Created by 新然 on 16/10/31.
//

#include "com_capping_xinran_jnitest_JNIUtils.h"
#include <string.h>
/**
 * com.capping.xinran.jnitest.JNIUtils
 */
JNIEXPORT jstring JNICALL Java_com_capping_xinran_jnitest_getStringFormC
        (JNIEnv *env, jobject obj){
    return (*env).NewStringUTF("这里是来自c的string");
}

const char keyValue[] = {
        21, 25, 21, -45, 25, 98, -55, -45, 10, 35, -45, 35,
        26, -5, 25, -65, -78, -99, 85, 45, -5, 10, -0, 11,
        -35, -48, -98, 65, -32, 14, -67, 25, 36, -56, -45, -5,
        12, 15, 35, -15, 25, -14, 62, -25, 33, -45, 55, 12, -8
};

const char iv[] =  {    //16 bit
        -33, 32, -25, 25, 35, -27, 55, -12, -15,32,
        23, 45, -26, 32, 5,16
};


jbyteArray Java_com_capping_xinran_jnitest_getKeyValue(JNIEnv *env, jobject obj)
{

    jbyteArray kvArray = (*env).NewByteArray(sizeof(keyValue));
    jbyte *bytes = (*env).GetByteArrayElements(kvArray,0);

    int i;
    for (i = 0; i < sizeof(keyValue);i++){
        bytes[i] = (jbyte)keyValue[i];
    }

    (*env).SetByteArrayRegion(kvArray, 0, sizeof(keyValue),bytes);
    (*env).ReleaseByteArrayElements(kvArray,bytes,0);

    return kvArray;
}

//JNIEXPORT JNICALL
jbyteArray Java_com_capping_xinran_jnitest_getIv(JNIEnv *env, jobject obj)
{

    jbyteArray ivArray = (*env).NewByteArray(sizeof(iv));
    jbyte *bytes = (*env).GetByteArrayElements(ivArray, 0);

    int i;
    for (i = 0; i < sizeof(iv); i++){
        bytes[i] = (jbyte)iv[i];
    }

    (*env).SetByteArrayRegion(ivArray, 0, sizeof(iv), bytes);
    (*env).ReleaseByteArrayElements(ivArray,bytes,0);

    return ivArray;
}


