/*
 * Information.cpp
 *
 *  Created on: Oct 7, 2022
 *      Author: michiel
 */
#include "Information.hpp"

Information::Information()
{
	info = NULL;
}

Information::~Information()
{

}

void Information::setInformation(string msg)
{
	info = msg;
}

string Information::getInformation()
{
	return info;
}
