#include "Rooster.h"
#include <iostream>

void Rooster::voice()
{
	std::cout << "I am a " << this->getType() << " of species " << this->getSpecies() << std::endl;
}

Rooster::Rooster() {}

Rooster::Rooster(const std::string& type, const int& age, const int& weight) : Animal(type, age, weight)
{
}
