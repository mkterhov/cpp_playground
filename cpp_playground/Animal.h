
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
    explicit Animal(const std::string&, const int&, const int&);
    virtual ~Animal();
    virtual void voice() = 0;
    std::string getType() const;
    void setType(const std::string&);
    Animal(const Animal& other); // Copy constructor

    Animal& operator=(const Animal& other);

    Animal(Animal&& other) noexcept;
    Animal& operator=(Animal&& other) noexcept;

    bool operator<(const Animal& other) const;
    bool operator>(const Animal& other) const;
    bool operator==(const Animal& other) const;

    std::string getSpecies() const;
    void setSpecies(const std::string&);
    int getAge() const;
    void setAge(const int&);
    int getWeight() const;
    void setWeight(const int&);

    void printInfo() const;
};
