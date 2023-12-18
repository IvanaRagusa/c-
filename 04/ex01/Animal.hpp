
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal& Animal);
    virtual ~Animal();
    Animal(std::string name);
    std::string getType() const;
    Animal& operator=(const Animal& Animal);
    virtual void makeSound() const;

};

#endif
