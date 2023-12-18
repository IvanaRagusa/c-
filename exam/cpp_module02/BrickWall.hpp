#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
    public:
    BrickWall();
    ~BrickWall();
    ATarget * clone() const;
};