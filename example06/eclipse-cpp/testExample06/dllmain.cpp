/*
 * dllmain.cpp
 *
 *  Created on: Oct 7, 2022
 *      Author: michiel
 */
#include "pch.hpp"
#include "java\example06C_NativePointer.h"
#include "java\example06C_Information.h"
#include "Information.hpp"

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

void setClassInstance(JNIEnv* env, jobject obj, Information* t)
{
	jclass cls = env->GetObjectClass(obj);
	jfieldID fid = env->GetFieldID(cls, "nativePointer", JLONG);
	jlong ptr = reinterpret_cast<jlong>(t);
	env->SetLongField(obj, fid, ptr);
}

Information* getClassInstance(JNIEnv* env, jobject obj)
{
	jclass cls = env->GetObjectClass(obj);
	jfieldID fid = env->GetFieldID(cls, "nativePointer", JLONG);
	jlong lf = env->GetLongField(obj, fid);
	Information* info = reinterpret_cast<Information*>(lf);
	return info;
}

/*
 * NativePointer
 */
JNIEXPORT void JNICALL Java_example06C_NativePointer_make(JNIEnv* env, jobject obj)
{
	Information* info = new Information();
	setClassInstance(env, obj, info);
}

JNIEXPORT void JNICALL Java_example06C_NativePointer_dispose(JNIEnv* env, jobject obj)
{
	Information* info = getClassInstance(env, obj);
	delete info;
}

/*
 * Information
 */
JNIEXPORT void JNICALL Java_example06C_Information_setInformation(JNIEnv* env, jobject obj, jstring str)
{
	string text = env->GetStringUTFChars(str, 0);
	Information* info = getClassInstance(env, obj);
	info->setInformation(text);
}

JNIEXPORT jstring JNICALL Java_example06C_Information_getInformation(JNIEnv* env, jobject obj)
{
	Information* info = getClassInstance(env, obj);
	string str = info->getInformation();
	jstring text = env->NewStringUTF(str);
	return text;
}
