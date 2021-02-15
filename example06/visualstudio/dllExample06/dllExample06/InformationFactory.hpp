#pragma once

#ifndef _InformationFactory_HPP_
#define _InformationFactory_HPP_

#include "Information.hpp"

class IInformationFactory
{
public:
	virtual IInformation* newInformation(const char* text) = 0;
};

class InformationFactory : public IInformationFactory
{
public:
	InformationFactory();
	~InformationFactory();
	IInformation* newInformation(const char* text);
};

#endif
