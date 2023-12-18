
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#include <string>

class WrongAnimal {
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& WrongAnimal);
    ~WrongAnimal();
   // WrongAnimal(std::string name);
    std::string getType() const;
    WrongAnimal& operator=(const WrongAnimal& WrongAnimal);
    void makeSound() const;
};

#endif
