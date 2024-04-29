
#pragma once
#include <string>

class Animal
{
protected:
    std::string m_species;
public:
    Animal() {};
    Animal(const std::string&);
    virtual void voice() = 0;
    std::string getSpecies() const;
    void setSpecies(const std::string&);
};
