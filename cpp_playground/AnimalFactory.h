#pragma once
#include <string>
#include <map>
#include "animal.h"

class AnimalFactory
{
private:
public:
	static const std::map<std::string, int> m_animalTypes;
	static const std::map<std::string, std::string> m_animalSpecies;

	Animal* createAnimalDefault(const std::string&);
};