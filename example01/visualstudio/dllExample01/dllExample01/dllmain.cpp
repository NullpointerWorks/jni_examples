// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "jni_example01.hpp"
#include <iostream>

using namespace std;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

JNIEXPORT jstring JNICALL Java_example01_JNIExample01_getHelloWorld(JNIEnv* env, jobject jobj)
{
    jstring hw = env->NewStringUTF("Hello World!");
    return hw;
}
