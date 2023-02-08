//
// Created by Administrator on 2023/2/8 0008.
//
#include "com_solarexsoft_usesodemo_MainActivity.h"
#include "com_solarexsoft_ndkdemo_HelloNDK.h"
JNIEXPORT jstring JNICALL Java_com_solarexsoft_usesodemo_MainActivity_callHelloFromSo
  (JNIEnv *env, jclass clz) {
    return Java_com_solarexsoft_ndkdemo_HelloNDK_hello(env, clz);
}
