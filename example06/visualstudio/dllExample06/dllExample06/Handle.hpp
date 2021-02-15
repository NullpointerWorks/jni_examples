#pragma once
#include <jni.h>

#ifndef _JNI_Handle_
#define _JNI_Handle_

inline jfieldID getHandleField(JNIEnv* env, jobject obj)
{
    jclass c = env->GetObjectClass(obj);
    return env->GetFieldID(c, "nativePointer", "J"); // J = long
}

template <typename T>
inline T* getHandle(JNIEnv* env, jobject obj)
{
    jlong handle = env->GetLongField(obj, getHandleField(env, obj));
    return reinterpret_cast<T*>(handle);
}

template <typename T>
inline void setHandle(JNIEnv* env, jobject obj, T* t)
{
    jlong handle = reinterpret_cast<jlong>(t);
    env->SetLongField(obj, getHandleField(env, obj), handle);
}

inline void setHandle(JNIEnv* env, jobject obj, jlong v)
{
    env->SetLongField(obj, getHandleField(env, obj), v);
}

#endif
