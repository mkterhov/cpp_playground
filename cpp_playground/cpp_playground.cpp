// cpp_playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ZooSingleton.h"


int main()
{
    ZooSingleton* zoo = ZooSingleton::getInstance(10);
    zoo->populate();
    zoo->printAnimals();

    return 0;
}