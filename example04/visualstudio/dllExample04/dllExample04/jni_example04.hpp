#include <jni.h>

/* Header for class example04_JNIExample04 */

#ifndef _Included_example04_JNIExample04
#define _Included_example04_JNIExample04
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     example04_JNIExample04
	 * Method:    getByte
	 * Signature: ()B
	 */
	JNIEXPORT jbyte JNICALL Java_example04_JNIExample04_getByte
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getShort
	 * Signature: ()S
	 */
	JNIEXPORT jshort JNICALL Java_example04_JNIExample04_getShort
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getInteger
	 * Signature: ()I
	 */
	JNIEXPORT jint JNICALL Java_example04_JNIExample04_getInteger
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getLong
	 * Signature: ()J
	 */
	JNIEXPORT jlong JNICALL Java_example04_JNIExample04_getLong
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getFloat
	 * Signature: ()F
	 */
	JNIEXPORT jfloat JNICALL Java_example04_JNIExample04_getFloat
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getDouble
	 * Signature: ()F
	 */
	JNIEXPORT jfloat JNICALL Java_example04_JNIExample04_getDouble
	(JNIEnv*, jobject);

	/*
	 * Class:     example04_JNIExample04
	 * Method:    getString
	 * Signature: ()Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_example04_JNIExample04_getString
	(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif
