#include "Zoo.h"
#include <iostream>
#include <vector>
#include <algorithm>

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
        delete[] this->animals[i];
        this->animals[i] = nullptr;
    }

    delete[] this->animals;
    this->animals = nullptr;
}

Zoo::Zoo(const Zoo& obj) : m_size(obj.m_size) 
{
    this->animalFactory = new AnimalFactory;

    this->animals = new Animal * [m_size];
    for (int i = 0; i < m_size; i++)
    {
        this->animals[i] = obj.animals[i];
    }
}

Zoo::Zoo(Zoo&& obj) noexcept : m_size(obj.m_size), animalFactory(obj.animalFactory), animals(obj.animals)
{
    std::cout << "moved" << std::endl;

    obj.m_size = 0;
    obj.animalFactory = nullptr;
    obj.animals = nullptr;
}

Zoo& Zoo::operator=(Zoo&& obj) noexcept 
{
    if (this != &obj) {
        std::cout << "moved =" << std::endl;
        m_size = obj.m_size;
        animalFactory = obj.animalFactory;
        animals = obj.animals;

        obj.m_size = 0;
        obj.animalFactory = nullptr;
        obj.animals = nullptr;
    }
    return *this;
}


Zoo& Zoo::operator=(const Zoo& obj)
{
    if (this != &obj) {
        delete animalFactory;
        for (int i = 0; i < m_size; i++) {
            delete animals[i];
        }
        delete[] animals;

        m_size = obj.m_size;
        this->animalFactory = new AnimalFactory;
        this->animals = new Animal * [m_size];
        for (int i = 0; i < m_size; i++) {
            this->animals[i] = this->animalFactory->createAnimalByType(obj.animals[i]->getType(), obj.animals[i]->getAge(), obj.animals[i]->getWeight());
        }
    }
    return *this;
}

void Zoo::populate()
{
    for (int i = 0; i < m_size; ++i)
    {
        animals[i] = animalFactory->createAnimalByType(types.at(i % types.size()), i + i % types.size(), i % types.size()+i);
    }
}

void Zoo::printAnimals() const
{
    if (animals == nullptr || m_size == 0)
    {
        std::cout << "No animals in the zoo" << std::endl;
        return;
    }

    for (int i = 0; i < m_size; ++i)
    {
        animals[i]->printInfo();
    }
}

void Zoo::printLargestAnimals() const 
{
    if (animals == nullptr)
    {
        std::cout << "No animals in the zoo" << std::endl;
        return;
    }

    std::vector<Animal*> sortedAnimals(animals, animals + m_size);
    std::sort(sortedAnimals.begin(), sortedAnimals.end(), [](Animal* a, Animal* b) {
            return *a > *b;
    });

    int max = [](int size) { return size > 3 ? 3 : size; }(sortedAnimals.size());

    std::cout << "Top " << max << " largest animals:" << std::endl;

    for (int i = 0; i < max && i < sortedAnimals.size(); ++i) {
        sortedAnimals[i]->printInfo();
    }
}
