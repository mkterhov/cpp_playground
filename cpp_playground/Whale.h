#pragma once
#include "Animal.h"

class Whale : public Animal
{
public:
	Whale();
	Whale(const std::string&, const int&, const int&);
	virtual void voice();
};

