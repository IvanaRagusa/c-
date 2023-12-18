#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(const Ice& Other)
{
    *this = Other;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
	this->type = other.type;

    return(*this);    
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

std::string const & Ice::getType() const
{
    return (this->type);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "  *" << std::endl;
}

Ice::~Ice() {}
