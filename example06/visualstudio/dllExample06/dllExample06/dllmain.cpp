#include "pch.h"
#include "Handle.hpp"
#include "ExportJNI.hpp"
#include "Information.hpp"
#include "InformationFactory.hpp"

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

/*
    Header for class example06C_Information
*/

JNIEXPORT void JNICALL Java_example06C_Information_setInformation
(JNIEnv* env, jobject obj, jstring str)
{
    IInformation* nfo = getHandle<IInformation>(env, obj);
    const char* text = env->GetStringUTFChars(str, 0);
    nfo->setInformation(text);
}

JNIEXPORT jstring JNICALL Java_example06C_Information_getInformation
(JNIEnv* env, jobject obj)
{
    IInformation* nfo = getHandle<IInformation>(env, obj);
    const char* info = nfo->getInformation();
    jstring text = env->NewStringUTF(info);
    return text;
}

JNIEXPORT void JNICALL Java_example06C_Information_dispose
(JNIEnv* env, jobject obj)
{
    IInformation* nfo = getHandle<IInformation>(env, obj);
    setHandle(env, obj, 0L);
    delete nfo;
}

/*
    Header for class example06C_InformationFactory
*/

JNIEXPORT void JNICALL Java_example06C_InformationFactory_initialize
(JNIEnv* env, jobject obj)
{
    IInformationFactory* infofactory = new InformationFactory();
    setHandle(env, obj, infofactory);
}

JNIEXPORT jlong JNICALL Java_example06C_InformationFactory_newInformationNative
(JNIEnv* env, jobject obj, jstring init)
{
    IInformationFactory* factory = getHandle<IInformationFactory>(env, obj);
    const char* text = env->GetStringUTFChars(init, 0);
    IInformation* info = factory->newInformation(text);
    return (jlong)info;
}

JNIEXPORT void JNICALL Java_example06C_InformationFactory_dispose
(JNIEnv* env, jobject obj)
{
    IInformationFactory* factory = getHandle<IInformationFactory>(env, obj);
    setHandle(env, obj, 0L);
    delete factory;
}
