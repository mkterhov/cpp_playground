#include "Zoo.h"

const std::map<int, std::string> Zoo::types = {
    {0, "Lion"},
    {1, "Rooster"},
    {2, "Eagle"},
    {3, "Dog"},
    {4, "Whale"}
};

Zoo::Zoo() {
    this->animalFactory = new AnimalFactory;
    this->animals = new Animal * [m_size];
}

Zoo::Zoo(const int& size): m_size(size) {
    this->animalFactory = new AnimalFactory;
    this->animals = new Animal * [m_size];
}

Zoo::~Zoo()
{
    delete this->animalFactory;

    for (int i = 0; i < m_size; i++)
    {
        delete this->animals[i];
        this->animals[i] = nullptr;
    }

    delete[] this->animals;
    this->animals = nullptr;
}

Zoo::Zoo(const Zoo& obj) : m_size(obj.m_size) {
    this->animalFactory = new AnimalFactory;
    this->animals = new Animal * [m_size];
    for (int i = 0; i < m_size; i++)
    {
        this->animals[i] = obj.animals[i];
    }
}

Zoo& Zoo::operator=(const Zoo& obj)
{
    if (this != &obj) {  // Protect against self-assignment
        // Clean up current animalFactory and animals array
        delete animalFactory;
        for (int i = 0; i < m_size; i++) {
            delete animals[i];
        }
        delete[] animals;

        // Deep copy of animals
        m_size = obj.m_size;
        this->animalFactory = new AnimalFactory;
        this->animals = new Animal * [m_size];
        for (int i = 0; i < m_size; i++) {
            this->animals[i] = this->animalFactory->createAnimalDefault(obj.animals[i]->getName());
        }
    }
    return *this;
}

void Zoo::populate()
{
    for (int i = 0; i < m_size; ++i)
    {
        animals[i] = animalFactory->createAnimalDefault(types.at(i % types.size()));
    }
}

void Zoo::printAnimals() const
{
    for (int i = 0; i < 5; ++i)
    {
        animals[i]->voice();
    }
}