// cpp_playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "AnimalFactory.h"
const std::map<int, std::string> types = {
    {0, "Lion"},
    {1, "Rooster"},
    {2, "Eagle"},
    {3, "Dog"},
    {4, "Whale"}
};

int main()
{
    AnimalFactory animalFactory;
    Animal** animals = new Animal * [5];

    for (int i = 0; i < 5; ++i)
    {
        animals[i] = animalFactory.createAnimalDefault(types.at(i));

    }
    for (int i = 0; i < 5; ++i)
    {
        animals[i]->voice();
    }

    for (int i = 0; i < 5; ++i)
    {
        delete animals[i];
        animals[i] = nullptr;
    }

    delete[] animals;
    animals = nullptr;

    return 0;
}