#include "Rooster.h"
#include <iostream>

void Rooster::voice()
{
	std::cout << "I am a " << this->getName() << " of species " << this->getSpecies() << std::endl;
}

Rooster::Rooster() {}