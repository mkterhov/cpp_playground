#include "Eagle.h"
#include <iostream>

void Eagle::voice()
{
	std::cout << "I am a " << this->getType() << " of species " << this->getSpecies() << std::endl;
}

Eagle::Eagle() {}

Eagle::Eagle(const std::string& type, const int& age, const int& weight) : Animal(type, age, weight)
{
}
