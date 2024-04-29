
#include <algorithm>
#include <stdexcept>
#include "AnimalFactory.h"
#include "Lion.h"
#include "Eagle.h"
#include "Whale.h"
#include "Rooster.h"
#include "Dog.h"

const std::map<std::string, int> AnimalFactory::m_animalTypes = { {"Lion", 0}, {"Rooster", 1}, {"Eagle", 2}, {"Dog", 3},  {"Whale", 4} };

Animal* AnimalFactory::createAnimalDefault(const std::string& type)
{
    auto it = m_animalTypes.find(type);

    if (it == m_animalTypes.end())
    {
        throw std::invalid_argument("invalid input");
    }

    Animal* animal = nullptr;
    switch (m_animalTypes.at(type))
    {
    case 0:
        animal = new Lion();
        break;
    case 1:
        animal = new Rooster();
        break;
    case 2:
        animal = new Eagle();
        break;
    case 3:
        animal = new Dog();

        break;
    case 4:
        animal = new Whale();
        break;    
    }

    return animal;
};