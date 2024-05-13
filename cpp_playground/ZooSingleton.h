#pragma once

#include <map>
#include <string>
#include "Animal.h"
#include "AnimalFactory.h"

class ZooSingleton
{
private:
	AnimalFactory* animalFactory;
	ZooSingleton();
	ZooSingleton(const int&);
	static ZooSingleton* singleton;
	Animal** animals = nullptr;
	int m_size = 10;
public:
	static ZooSingleton* getInstance(const int&);

	~ZooSingleton();
	ZooSingleton& operator=(const ZooSingleton&) = delete;
	ZooSingleton(const ZooSingleton&) = delete;

	static const std::map<int, std::string> types;

	void populate();
	void printAnimals() const;
};

