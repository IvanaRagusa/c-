
#include "Animal.hpp"

Animal::Animal()
{
    _type = '\0';
    std::cout << "\033[1;33mCostruttore Animal chiamato\033[0m" << std::endl;
}

Animal::Animal(const Animal& other) 
{
    std::cout << "\033[1;33mCostruttore copia Animal chiamato\033[0m" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& Animal) 
{
    if (this != &Animal) {
        this->_type = Animal._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return(this->_type);
}

void Animal::makeSound() const
{
    std::cout << "\033[1;32mQuesto è il verso di un animale\033[0m \U0001F437\U0001F43D" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "\033[1;33mDistruttore Animal chiamato\033[0m" << std::endl;
}
