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
	explicit Zoo(const int&);
	~Zoo();
	Zoo& operator=(const Zoo&);
	Zoo& operator=(Zoo&& obj) noexcept;
	Zoo(const Zoo&);
	Zoo(Zoo&&) noexcept;

	static const std::map<int, std::string> types;
	void populate();

	void printAnimals() const;
	void printLargestAnimals() const;
};

