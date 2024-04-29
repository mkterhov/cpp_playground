#include "Lion.h"
#include <iostream>

void Lion::voice()
{
	std::cout << "I am a " << this->getName() << " of species " << this->getSpecies() << std::endl;
}

Lion::Lion(){}