#include "pch.h"
#include "InformationFactory.hpp"

/*
 * Class:     example06_InformationFactory
 * Method:    newInformation
 * Signature: ()Lexample06/Information;
 */
JNIEXPORT jobject JNICALL Java_example06_InformationFactory_newInformation(JNIEnv* env, jobject jobj)
{
	// find the Java class
	jclass jcClass = env->FindClass("example06/Information");
	if (jcClass == NULL) return NULL;

	// create a new instance
	jobject objInstance = env->AllocObject(jcClass);
	if (objInstance == NULL)
	{
		env->DeleteLocalRef(jcClass);
		return NULL;
	}

	env->DeleteLocalRef(jcClass);
	return objInstance;
}
