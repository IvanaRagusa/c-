#pragma once
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* slot[4];
        AMateria* scarto[50];
    public:
        Character();
        Character(std::string const & name);
        Character(const Character& Other);
        Character& operator=(const Character& other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};




