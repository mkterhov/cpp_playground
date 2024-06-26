
#include <algorithm>
#include <stdexcept>
#include "AnimalFactory.h"
#include "Lion.h"
#include "Eagle.h"
#include "Whale.h"
#include "Rooster.h"
#include "Dog.h"

const std::map<std::string, int> AnimalFactory::m_animalTypes = { {"Lion", 0}, {"Rooster", 1}, {"Eagle", 2}, {"Dog", 3},  {"Whale", 4} };
const std::map<std::string, std::string> AnimalFactory::m_animalSpecies = { {"Lion", "Mammal"}, {"Rooster", "Avian"}, {"Eagle", "Avian"}, {"Dog", "Mammal"},  {"Whale", "Mammal"} };

Animal* AnimalFactory::createAnimalByType(const std::string& type, const int& age, const int& weight)
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
        animal = new Lion(type, age, weight);
        break;
    case 1:
        animal = new Rooster(type, age, weight);
        break;
    case 2:
        animal = new Eagle(type, age, weight);
        break;
    case 3:
        animal = new Dog(type, age, weight);
        break;
    case 4:
        animal = new Whale(type, age, weight);
        break;    
    }

    animal->setSpecies(m_animalSpecies.at(type));

    return animal;
};