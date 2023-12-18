#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class ASpell;

class SpellBook
{
    private:

    std::vector<ASpell *> spells; 
    
    SpellBook(const SpellBook &);
    SpellBook & operator=(const SpellBook &);

    public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell *spell);
    void forgetSpell(const std::string &spellname);
    ASpell* createSpell(const std::string &spellname);
};
