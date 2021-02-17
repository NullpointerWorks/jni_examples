#include "pch.h"
#include "jni_example02.hpp"

JNIEXPORT void JNICALL Java_example02_JNIExample02_doPrint(JNIEnv* env, jobject jobj)
{
	jclass javaClass = env->FindClass("example02/JNIExample02");
	if (javaClass == NULL) return;

	jobject instance = env->AllocObject(javaClass);
	if (instance == NULL)
	{
		env->DeleteLocalRef(javaClass);
		return;
	}

	jmethodID method = env->GetMethodID(javaClass, "printMessage", "(Ljava/lang/String;)V");
	if (method == NULL)
	{
		env->DeleteLocalRef(instance);
		env->DeleteLocalRef(javaClass);
		return;
	}

	jstring message = env->NewStringUTF("Hello World Again!");
	env->CallObjectMethod(instance, method, message);

	env->DeleteLocalRef(instance);
	env->DeleteLocalRef(javaClass);
}
