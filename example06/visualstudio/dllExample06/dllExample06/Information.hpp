#pragma once

#ifndef _Information
#define _Information

// interface
class IInformation
{
public:
	virtual void setInformation(const char* msg) = 0;
	virtual const char* getInformation() = 0;
};

// concrete implementation
class Information : public IInformation
{
private:
	const char* info;

public:
	Information();
	~Information();
	void setInformation(const char* msg);
	const char* getInformation();
};

#endif
