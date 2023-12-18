
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string _type;

public:
    AAnimal();
    AAnimal(const AAnimal& other);
    virtual ~AAnimal();
    AAnimal(std::string name);
    std::string getType() const;
    AAnimal& operator=(const AAnimal& other);
    virtual void makeSound() const = 0;
};

#endif
