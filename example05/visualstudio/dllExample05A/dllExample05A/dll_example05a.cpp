#include "pch.h"
#include "dll_example05a.hpp"

EXTERN IMathematics* DLLCALL CreateMathematics()
{
	return new Mathematics();
}

int32 Mathematics::Addition(int32 a, int32 b)
{
	return a + b;
}

int32 Mathematics::Subtraction(int32 a, int32 b)
{
	return a - b;
}

int32 Mathematics::Multiplication(int32 a, int32 b)
{
	return a * b;
}

int32 Mathematics::Division(int32 a, int32 b)
{
	return a / b;
}
