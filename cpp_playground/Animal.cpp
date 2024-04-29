#include "Animal.h"

Animal::Animal(const std::string& species) : m_species(species) {}

std::string Animal::getSpecies() const
{
    return m_species;
}

void Animal::setSpecies(const std::string& species)
{
    m_species = species;
}