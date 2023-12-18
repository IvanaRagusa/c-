 #include "AMateria.hpp"
 
AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria() 
{
    type = "";
}

AMateria::AMateria(const AMateria& Other)
{
    *this = Other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
	    this->type = other.type;

    return(*this);    
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target) 
{
    (void)target ;
}