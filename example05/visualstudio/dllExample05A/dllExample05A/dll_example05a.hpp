#pragma once

#ifdef _MAKE_DLL_
	#define EXTERN __declspec(dllexport)
#else
	#define EXTERN __declspec(dllimport)
#endif

#define DLLCALL __stdcall
typedef unsigned long int32;

// interface
class IMathematics
{
public:
	virtual int32 Addition(int32 a, int32 b) = 0;
	virtual int32 Subtraction(int32 a, int32 b) = 0;
	virtual int32 Multiplication(int32 a, int32 b) = 0;
	virtual int32 Division(int32 a, int32 b) = 0;
};

// implementation
class Mathematics : public IMathematics
{
public:
	int32 Addition(int32 a, int32 b);
	int32 Subtraction(int32 a, int32 b);
	int32 Multiplication(int32 a, int32 b);
	int32 Division(int32 a, int32 b);
};

// export factory function
extern "C" EXTERN IMathematics * DLLCALL CreateMathematics();

// define function prototype that matches the factory function's signature
typedef IMathematics* (*CreateMath) ();
