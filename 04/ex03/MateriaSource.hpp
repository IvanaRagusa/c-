#pragma once
#include <iostream>
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* slot[4];
    public:
        MateriaSource();
        MateriaSource(std::string const & name);
        MateriaSource(const MateriaSource& Other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};