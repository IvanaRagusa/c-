#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
     _type = "WrongCat";
    std::cout << "\033[1;33mCostruttore WrongCat chiamato\033[0m" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "\033[1;33mDistruttore WrongCat chiamato\033[0m" << std::endl;
}


WrongCat::WrongCat(const WrongCat& other) 
{
    std::cout << "\033[1;33mCostruttore copia WrongCat chiamato\033[0m" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& WrongCat) 
{
    if (this != &WrongCat) {
        this->_type = WrongCat._type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "\033[1;35mBiao Diao Fiao\033[0m" << std::endl;
}