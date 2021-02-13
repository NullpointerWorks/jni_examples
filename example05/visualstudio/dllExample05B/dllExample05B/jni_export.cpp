#include "pch.h"
#include "jni_export.h"
#include "LibraryContainer.hpp"

LibraryContainer* container = new LibraryContainer( L"dllExample05A.dll" );
CreateMath create = (CreateMath)container->GetMethod("CreateMathematics");
IMathematics* math = create();

JNIEXPORT jint JNICALL Java_example05_Mathematics_Addition
(JNIEnv* env, jobject jobj, jint a, jint b)
{
	if (create != NULL)
	{
		jint res = math->Addition(a,b);
		return res;
	}
	return NULL;
}

JNIEXPORT jint JNICALL Java_example05_Mathematics_Subtraction
(JNIEnv* env, jobject jobj, jint a, jint b)
{
	if (create != NULL)
	{
		jint res = math->Subtraction(a, b);
		return res;
	}
	return NULL;
}

JNIEXPORT jint JNICALL Java_example05_Mathematics_Multiplication
(JNIEnv* env, jobject jobj, jint a, jint b)
{
	if (create != NULL)
	{
		jint res = math->Multiplication(a, b);
		return res;
	}
	return NULL;
}

JNIEXPORT jint JNICALL Java_example05_Mathematics_Division
(JNIEnv* env, jobject jobj, jint a, jint b)
{
	if (create != NULL)
	{
		jint res = math->Division(a, b);
		return res;
	}
	return NULL;
}

