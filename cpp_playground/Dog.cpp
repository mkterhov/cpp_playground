#include "Dog.h"
#include <iostream>

void Dog::voice()
{
	std::cout << "I am a " << this->getName() << " of species " << this->getSpecies() << std::endl;
}

Dog::Dog() {}