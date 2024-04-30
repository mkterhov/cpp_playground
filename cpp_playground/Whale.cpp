#include "Whale.h"
#include <iostream>

void Whale::voice()
{
	std::cout << "I am a " << this->getType() << " of species " << this->getSpecies() << std::endl;
}

Whale::Whale() {}

Whale::Whale(const std::string& type, const int& age, const int& weight) : Animal(type, age, weight)
{
}
