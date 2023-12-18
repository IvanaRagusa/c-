
#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    _type = '\0';
    std::cout << "\033[1;33mCostruttore AAnimal chiamato\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) 
{
    std::cout << "\033[1;33mCostruttore copia AAnimal chiamato\033[0m" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& AAnimal) 
{
    if (this != &AAnimal) {
        this->_type = AAnimal._type;
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return(this->_type);
}

void AAnimal::makeSound() const {}

AAnimal::~AAnimal() 
{
    std::cout << "\033[1;33mDistruttore AAnimal chiamato\033[0m" << std::endl;
}
