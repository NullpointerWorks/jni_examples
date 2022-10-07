/*
 * Information.hpp
 *
 *  Created on: Oct 7, 2022
 *      Author: michiel
 */

#include "pch.hpp"
#ifndef INFORMATION_HPP_
#define INFORMATION_HPP_

class Information
{
	string info;

public:
	Information();
	~Information();
	void setInformation(string msg);
	string getInformation();
};

#endif /* INFORMATION_HPP_ */
