#include "Animal.h"

Animal::Animal(const std::string& type, const int& age, const int& weight) : m_type(type), m_age(age), m_weight(weight){}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
    return m_type;
}

void Animal::setType(const std::string& type)
{
    m_type = type;
}

std::string Animal::getSpecies() const
{
    return m_species;
}

void Animal::setSpecies(const std::string& species)
{
    m_species = species;
}

int Animal::getAge() const
{
    return m_age;
}

void Animal::setAge(const int& age)
{
    m_age = age;
}

int Animal::getWeight() const
{
    return 0;
}

void Animal::setWeight(const int& weight)
{
    m_weight = weight;
}
