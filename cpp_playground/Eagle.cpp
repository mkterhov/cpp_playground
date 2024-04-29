#include "Eagle.h"
#include <iostream>

void Eagle::voice()
{
	std::cout << "I am a " << this->getName() << " of species " << this->getSpecies() << std::endl;
}

Eagle::Eagle() {}