#include "Dog.h"
#include <iostream>

void Dog::voice()
{
	std::cout << "I am a " << this->getType() << " of species " << this->getSpecies() << std::endl;
}

Dog::Dog() {}

Dog::Dog(const std::string& type, const int& age, const int& weight) : Animal(type, age, weight)
{
}
