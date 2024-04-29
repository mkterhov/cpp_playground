
#pragma once
#include <string>

class Animal
{
protected:
    std::string m_species;
    std::string m_name;
public:
    Animal() {};
    Animal(const std::string&);
    virtual void voice() = 0;
    std::string getName() const;
    void setName(const std::string&);

    std::string getSpecies() const;
    void setSpecies(const std::string&);
};
