#include "pch.h"
#include "LibraryContainer.hpp"
#include <iostream>

using namespace std;

/*
	Note: The library name encoding is vital. 
	Using a "const wchar_t" is not the same as 
	writing "const char" and casting to LPCWSTR.
*/
LibraryContainer::LibraryContainer(const wchar_t* name)
{
	hInstLibrary = LoadLibrary( name );
	if (hInstLibrary == NULL)
	{
		cout << "Failed loading library: " << name << endl;
	}
}

LibraryContainer::~LibraryContainer()
{
	FreeLibrary(hInstLibrary);
}

FARPROC LibraryContainer::GetMethod(const char* method)
{
	return GetProcAddress(hInstLibrary, method);
}
