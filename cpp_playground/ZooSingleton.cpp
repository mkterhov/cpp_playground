#include "ZooSingleton.h"

ZooSingleton* ZooSingleton::singleton = nullptr;

const std::map<int, std::string> ZooSingleton::types = {
    {0, "Lion"},
    {1, "Rooster"},
    {2, "Eagle"},
    {3, "Dog"},
    {4, "Whale"}
};

void ZooSingleton::populate()
{
    for (int i = 0; i < m_size; ++i)
    {
        animals[i] = animalFactory->createAnimalByType(types.at(i % types.size()), i + i % types.size(), i % types.size() + i);
    }
}

ZooSingleton* ZooSingleton::getInstance(const int& value = 10)
{
    if (singleton == nullptr) {
        singleton = new ZooSingleton(value);
    }

    return singleton;
}

void ZooSingleton::printAnimals() const
{
    for (int i = 0; i < m_size; ++i)
    {
        animals[i]->voice();
    }
}

ZooSingleton::ZooSingleton() {
    this->animalFactory = new AnimalFactory;
    this->animals = new Animal * [m_size];
}

ZooSingleton::ZooSingleton(const int& size) : m_size(size) {
    this->animalFactory = new AnimalFactory;
    this->animals = new Animal * [m_size];
}

ZooSingleton::~ZooSingleton()
{
    delete this->animalFactory;
    this->animalFactory = nullptr;

    for (int i = 0; i < m_size; i++)
    {
        delete this->animals[i];
        this->animals[i] = nullptr;
    }

    delete[] this->animals;
    this->animals = nullptr;

    delete singleton;
    singleton = nullptr;
}
