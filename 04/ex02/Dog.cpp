#include "Dog.hpp"

Dog::Dog() 
{
    _type = "Dog";
    brain = new Brain;
    std::cout << "\033[1;33mCostruttore Dog chiamato\033[0m" << std::endl;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "\033[1;33mDistruttore Dog chiamato\033[0m" << std::endl;
}

Dog::Dog(const Dog& other) 
{
    std::cout << "\033[1;33mCostruttore copia Dog chiamato\033[0m" << std::endl;
    *this = other;
}

const std::string Dog::get_ideas(int i) const
{
    return(brain->get_ideas(i));
}

void Dog::set_ideas ( const std::string &idea, int i)
{
    brain->set_ideas(idea, i);          
}

Dog& Dog::operator=(const Dog& other) 
{
if (this != &other) {
        this->_type = other._type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "\033[1;34mBau Bau Bau \033[0m" << std::endl;
}
