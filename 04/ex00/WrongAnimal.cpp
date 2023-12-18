
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    // _type = '\0';
    std::cout << "\033[1;33mCostruttore WrongAnimal chiamato\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) 
{
    std::cout << "\033[1;33mCostruttore copia WrongAnimal chiamato\033[0m" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& WrongAnimal) 
{
    if (this != &WrongAnimal) {
        this->_type = WrongAnimal._type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return(this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "\033[1;32mQuesto è il verso di un WrongAnimale\033[0m \U0001F437\U0001F43D" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "\033[1;33mDistruttore WrongAnimal chiamato\033[0m" << std::endl;
}
