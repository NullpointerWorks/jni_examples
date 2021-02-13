// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

/*
    Dont forget to set _MAKE_DLL_ definition when building.
    Project > Properties > C/C++ > Command Line >
        add to Additional Options: "/D_MAKE_DLL_" without the quotes.
*/

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
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

