#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ASpell.hpp"

class ATarget;

class Fwoosh : public ASpell
{
    public:
    Fwoosh();
    ~Fwoosh();
    ASpell * clone() const;
};