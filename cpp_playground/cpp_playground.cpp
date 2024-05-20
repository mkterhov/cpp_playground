// cpp_playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ZooSingleton.h"
#include "Zoo.h"


int main()
{
    Zoo zoo1(5);
    zoo1.populate();
    std::cout << "Zoo1:" << std::endl;
    zoo1.printAnimals();

    Zoo zoo2(std::move(zoo1));
    std::cout << "After moving zoo1 to zoo2:" << std::endl;
    std::cout << "Zoo1:" << std::endl;
    zoo1.printAnimals();
    std::cout << "Zoo2:" << std::endl;
    zoo2.printAnimals();

    // Use the move assignment operator to move zoo2 to zoo3
    Zoo zoo3(10); // Create another Zoo with a different size for demonstration
    zoo3 = std::move(zoo2);
    std::cout << "After moving zoo2 to zoo3:" << std::endl;
    std::cout << "Zoo2 (should be empty):" << std::endl;
    zoo2.printAnimals();
    std::cout << "Zoo3:" << std::endl;
    zoo3.printAnimals();

    return 0;
}