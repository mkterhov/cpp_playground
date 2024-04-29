// cpp_playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "AnimalFactory.h"
#include "Zoo.h"


int main()
{
    Zoo zoo;
    zoo.populate();
    zoo.printAnimals();

    return 0;
}