#include "pch.h"
#include "Handle.hpp"
#include "Information.hpp"

Information::Information()
{
	info = NULL;
}

Information::~Information()
{

}

void Information::setInformation(const char* msg)
{
	info = msg;
}

const char* Information::getInformation()
{
	return info;
}
