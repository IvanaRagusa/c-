#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Amateria;
class ICharacter;

class Ice : public AMateria
{
     public:
        Ice();
        ~Ice();
        Ice(const Ice& Other);
        Ice & operator=(const Ice& Other);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};