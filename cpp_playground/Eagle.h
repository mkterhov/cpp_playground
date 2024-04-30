#pragma once
#include "Animal.h"
class Eagle : public Animal
{
public:
	Eagle();
	Eagle(const std::string&, const int&, const int&);
	virtual void voice();
};

