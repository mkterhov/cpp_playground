#pragma once
#include "Animal.h"
class Rooster : public Animal
{
public:
	Rooster();
	Rooster(const std::string&, const int&, const int&);
	virtual void voice();
};

