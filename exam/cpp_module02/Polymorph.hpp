#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ASpell.hpp"

class ATarget;

class Polymorph : public ASpell
{
    public:
    Polymorph();
    ~Polymorph();
    ASpell * clone() const;
};