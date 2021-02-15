#include <jni.h>

/* Header for class example06C_Information */

#ifndef _Included_example06C_Information
#define _Included_example06C_Information
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     example06C_Information
	 * Method:    setInformation
	 * Signature: (Ljava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_example06C_Information_setInformation
	(JNIEnv*, jobject, jstring);

	/*
	 * Class:     example06C_Information
	 * Method:    getInformation
	 * Signature: ()Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_example06C_Information_getInformation
	(JNIEnv*, jobject);

	/*
	 * Class:     example06C_Information
	 * Method:    dispose
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_example06C_Information_dispose
	(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif

/* Header for class example06C_InformationFactory */

#ifndef _Included_example06C_InformationFactory
#define _Included_example06C_InformationFactory
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     example06C_InformationFactory
	 * Method:    initialize
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_example06C_InformationFactory_initialize
	(JNIEnv*, jobject);

	/*
	 * Class:     example06C_InformationFactory
	 * Method:    newInformationNative
	 * Signature: (Ljava/lang/String;)J
	 */
	JNIEXPORT jlong JNICALL Java_example06C_InformationFactory_newInformationNative
	(JNIEnv*, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
