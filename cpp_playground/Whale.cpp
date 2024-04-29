#include "Whale.h"
#include <iostream>

void Whale::voice()
{
	std::cout << "I am a " << this->getName() << " of species " << this->getSpecies() << std::endl;
}

Whale::Whale() {}