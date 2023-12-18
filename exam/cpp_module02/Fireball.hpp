#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ASpell.hpp"

class ATarget;

class Fireball : public ASpell
{
    public:
    Fireball();
    ~Fireball();
    ASpell * clone() const;
};