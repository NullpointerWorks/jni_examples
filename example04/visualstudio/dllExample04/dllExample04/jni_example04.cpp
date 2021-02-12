#include "pch.h"
#include "jni_example04.h"

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
