#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "BrickWall.hpp"
#include "Dummy.hpp"

class ATarget;

class TargetGenerator
{
    private:

    std::vector<ATarget *> targets; 
    
    TargetGenerator(const TargetGenerator &);
    TargetGenerator & operator=(const TargetGenerator &);

    public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget* target);
    void forgetTargetType(std::string const &type);
    ATarget* createTarget(std::string const &type);
};
