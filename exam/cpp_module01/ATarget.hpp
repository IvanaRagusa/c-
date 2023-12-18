#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>

class ASpell;

class ATarget
{
    private:

    std::string _type;

    public:
    ATarget();
    ATarget(const ATarget &);
    ATarget & operator=(const ATarget &);
    virtual ~ATarget();
    ATarget(const std::string &type);
    const std::string &getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(const ASpell &spell) const;
};

#include "ASpell.hpp"