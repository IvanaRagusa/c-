#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const Cure& Other)
{
    *this = Other;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
	this->type = other.type;

    return(*this);    
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

std::string const & Cure::getType() const
{
    return (this->type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s" << "wounds *" << std::endl;
}

Cure::~Cure() {}
