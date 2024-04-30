#pragma once

#include "Animal.h"

class Lion : public Animal
{
	public:
		Lion();
		Lion(const std::string&, const int&, const int&);
		virtual void voice();
};

