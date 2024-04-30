#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string&, const int&, const int&);
	virtual void voice();
};

