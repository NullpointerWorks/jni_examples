#include "pch.h"
#include "InformationFactory.hpp"

InformationFactory::InformationFactory()
{

}

InformationFactory::~InformationFactory()
{

}

IInformation* InformationFactory::newInformation(const char* text)
{
	IInformation* info = new Information();
	info->setInformation(text);
	return info;
}
