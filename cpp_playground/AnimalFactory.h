#pragma once
#include <string>
#include <map>
#include "animal.h"

class AnimalFactory
{
private:
public:
	static const std::map<std::string, int> m_animalTypes;
	Animal* createAnimalDefault(const std::string&);
};