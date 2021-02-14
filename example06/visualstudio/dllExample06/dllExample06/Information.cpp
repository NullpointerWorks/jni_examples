#include "pch.h"
#include "Information.hpp"

#include <iostream>
using namespace std;

/*
 * Class:     example06_Information
 * Method:    setInformation
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_example06_Information_setInformation
(JNIEnv* env, jobject obj, jstring str)
{
	jclass clazz = env->GetObjectClass(obj);

	// get "String information" field
	jfieldID strInformation = env->GetFieldID(clazz, "information", "Ljava/lang/String;");
	env->SetObjectField(obj, strInformation, str);

	env->DeleteLocalRef(clazz);
}
