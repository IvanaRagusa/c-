#include "Cat.hpp"

Cat::Cat() 
{
     _type = "Cat";
    std::cout << "\033[1;33mCostruttore Cat chiamato\033[0m" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "\033[1;33mDistruttore Cat chiamato\033[0m" << std::endl;
}

Cat::Cat(const Cat& other) 
{
    std::cout << "\033[1;33mCostruttore copia Cat chiamato\033[0m" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& Cat) 
{
    if (this != &Cat) {
        this->_type = Cat._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "\033[1;35mMiao Miao Miao\033[0m" << std::endl;
}