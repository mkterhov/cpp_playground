#include "Lion.h"
#include <iostream>

void Lion::voice()
{
	std::cout << "I am a " << this->getType() << " of species " << this->getSpecies() << std::endl;
}

Lion::Lion() {}

Lion::Lion(const std::string& type, const int& age, const int& weight) : Animal(type, age, weight)
{
}
