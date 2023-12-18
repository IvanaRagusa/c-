#include "Cat.hpp"

Cat::Cat() 
{
    _type = "Cat";
    brain = new Brain;
    std::cout << "\033[1;33mCostruttore Cat chiamato\033[0m" << std::endl;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "\033[1;33mDistruttore Cat chiamato\033[0m" << std::endl;
}

Cat::Cat(const Cat& other) 
{
    std::cout << "\033[1;33mCostruttore copia Cat chiamato\033[0m" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) 
{
    if (this != &other) {
        this->_type = other._type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

const std::string Cat::get_ideas(int i) const
{
    return(brain->get_ideas(i));
}

void Cat::set_ideas ( const std::string &idea, int i)
{
    brain->set_ideas(idea, i);          
}

void Cat::makeSound() const
{
    std::cout << "\033[1;35mMiao Miao Miao\033[0m" << std::endl;
}