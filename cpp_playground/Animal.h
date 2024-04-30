
#pragma once
#include <string>

class Animal
{
protected:
    std::string m_species;
    int m_weight = 0;
    int m_age = 0;
    std::string m_type;
public:
    Animal() {};
    Animal(const std::string&, const int&, const int&);
    virtual ~Animal();
    virtual void voice() = 0;
    std::string getType() const;
    void setType(const std::string&);

    std::string getSpecies() const;
    void setSpecies(const std::string&);
    int getAge() const;
    void setAge(const int&);
    int getWeight() const;
    void setWeight(const int&);
};
