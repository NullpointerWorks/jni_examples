#pragma once

class LibraryContainer
{
private:
	HINSTANCE hInstLibrary = NULL;

public:
	LibraryContainer(const wchar_t* name);
	~LibraryContainer();
	FARPROC GetMethod(const char* method);
};


