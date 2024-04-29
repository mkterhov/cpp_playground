#include "Animal.h"

Animal::Animal(const std::string& species) : m_species(species) {}

Animal::~Animal()
{
}

std::string Animal::getName() const
{
    return m_name;
}

void Animal::setName(const std::string& name)
{
    m_name = name;
}

std::string Animal::getSpecies() const
{
    return m_species;
}

void Animal::setSpecies(const std::string& species)
{
    m_species = species;
}