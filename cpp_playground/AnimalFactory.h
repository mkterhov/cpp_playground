#pragma once
#include <string>
#include <map>
#include "Animal.h"

class AnimalFactory
{
public:
	static const std::map<std::string, int> m_animalTypes;
	static const std::map<std::string, std::string> m_animalSpecies;

	Animal* createAnimalByType(const std::string&, const int&, const int&);
};