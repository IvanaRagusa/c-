#pragma once
#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
     public:
        Cure();
        ~Cure();
        Cure(const Cure& Other);
        Cure & operator=(const Cure& Other);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};