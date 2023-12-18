#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
    public:
    Dummy();
    ~Dummy();
    ATarget * clone() const;
};