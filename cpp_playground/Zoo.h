#pragma once
#include <map>
#include <string>
#include "Animal.h"
#include "AnimalFactory.h"

class Zoo
{
private:
	AnimalFactory * animalFactory;
	Animal** animals = nullptr;
	int m_size = 10;
public:
	Zoo();
	Zoo(const int&);
	~Zoo();
	Zoo& operator=(const Zoo&);
	Zoo(const Zoo&);

	static const std::map<int, std::string> types;
	void populate();

	void printAnimals() const;
};

