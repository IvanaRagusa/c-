#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>

class ATarget;

class ASpell
{
    private:

    std::string _name;
    std::string _effects;


    public:
    ASpell();
    ASpell(const ASpell &);
    ASpell & operator=(const ASpell &);
    virtual ~ASpell();
    ASpell(const std::string &name, const std::string &effects);
    const std::string &getName() const;
    const std::string &getEffects() const;
    virtual ASpell *clone() const = 0;
    void launch(const ATarget &target) const;
};

#include "ATarget.hpp"