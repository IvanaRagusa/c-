#include "Dog.hpp"

Dog::Dog() 
{
     _type = "Dog";
    std::cout << "\033[1;33mCostruttore Dog chiamato\033[0m" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "\033[1;33mDistruttore Dog chiamato\033[0m" << std::endl;
}

Dog::Dog(const Dog& other) 
{
    std::cout << "\033[1;33mCostruttore copia Dog chiamato\033[0m" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& Dog) 
{
    if (this != &Dog) {
        this->_type = Dog._type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "\033[1;34mBau Bau Bau \033[0m" << std::endl;
}
