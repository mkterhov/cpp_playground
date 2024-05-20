#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& type, const int& age, const int& weight) : m_type(type), m_age(age), m_weight(weight){}

Animal::~Animal()
{
}

Animal::Animal(Animal&& other) noexcept
    : m_type(std::move(other.m_type)), m_age(other.m_age), m_weight(other.m_weight) {
    other.m_age = 0;
    other.m_weight = 0.0;
}

Animal& Animal::operator=(Animal&& other) noexcept {
    if (this != &other) {
        m_type = std::move(other.m_type);
        m_age = other.m_age;
        m_weight = other.m_weight;

        other.m_age = 0;
        other.m_weight = 0.0;
    }
    return *this;
}

std::string Animal::getType() const
{
    return m_type;
}

void Animal::setType(const std::string& type)
{
    m_type = type;
}

Animal::Animal(const Animal& other)
    : m_type(other.m_type), m_age(other.m_age), m_weight(other.m_weight) {}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        m_type = other.m_type;
        m_age = other.m_age;
        m_weight = other.m_weight;
    }
    return *this;
}

bool Animal::operator<(const Animal& other) const {
    return m_weight < other.m_weight;
}

bool Animal::operator>(const Animal& other) const {
    return m_weight > other.m_weight;
}

bool Animal::operator==(const Animal& other) const {
    return m_weight == other.m_weight;
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

void Animal::printInfo() const {
    std::cout << "Type: " << m_type << ", Age: " << m_age << ", Weight: " << m_weight << std::endl;
}