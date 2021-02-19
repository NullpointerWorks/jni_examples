#include "pch.h"
#include "jni_example04.hpp"

JNIEXPORT jbyte JNICALL Java_example04_JNIExample04_getByte(JNIEnv* env, jobject jobj)
{
	signed char myByte = 127;
	return myByte;
}

JNIEXPORT jshort JNICALL Java_example04_JNIExample04_getShort(JNIEnv* env, jobject jobj)
{
	short myShort = 1024;
	return myShort;
}

JNIEXPORT jint JNICALL Java_example04_JNIExample04_getInteger(JNIEnv* env, jobject jobj)
{
	long myJInt = 100000; // Java integers are 32 bit, so are windows longs
	return myJInt;
}

JNIEXPORT jlong JNICALL Java_example04_JNIExample04_getLong(JNIEnv* env, jobject jobj)
{
	__int64 myLong = 2147483647i64 + 1i64; // 2147483647 + 1
	return myLong;
}

JNIEXPORT jfloat JNICALL Java_example04_JNIExample04_getFloat
(JNIEnv* env, jobject jobj)
{
	float pi = 3.1415f;
	return pi;
}

JNIEXPORT jfloat JNICALL Java_example04_JNIExample04_getDouble
(JNIEnv* env, jobject jobj)
{
	double e = 2.7;
	return e;
}

JNIEXPORT jstring JNICALL Java_example04_JNIExample04_getString
(JNIEnv* env, jobject jobj)
{
	const char* str = "My String";
	jstring newStr = env->NewStringUTF(str);
	return newStr;
}
