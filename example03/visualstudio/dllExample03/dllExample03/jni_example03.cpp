#include "pch.h"
#include "jni_example03.h"

JNIEXPORT jobject JNICALL Java_example03_JNIExample03_getInformation(JNIEnv* env, jobject jobj)
{
    jclass jcClass = env->FindClass("example03/StringInformation");
    if (jcClass == NULL) return NULL;

    jobject objInstance = env->AllocObject(jcClass);
    if (objInstance == NULL)
    {
        env->DeleteLocalRef(jcClass);
        return NULL;
    }

    jmethodID method = env->GetMethodID(jcClass, "setInformation", "(Ljava/lang/String;)V");
    if (method == NULL)
    {
        env->DeleteLocalRef(objInstance);
        env->DeleteLocalRef(jcClass);
        return NULL;
    }

    jstring info = env->NewStringUTF("Set by a native method! :D");
    env->CallObjectMethod(objInstance, method, info);

    env->DeleteLocalRef(info);
    env->DeleteLocalRef(jcClass);
    return objInstance;
}
