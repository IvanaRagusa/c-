#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "SpellBook.hpp"

class ASpell;

class Warlock
{
    private:

    std::string _name;
    std::string _title;
    SpellBook spells;
    Warlock();
    Warlock(const Warlock &);
    Warlock & operator=(const Warlock &);

    public:
    ~Warlock();
    Warlock(const std::string &name, const std::string &title);
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(const std::string spellname);
    void launchSpell(const std::string spellname, const ATarget &target);

};
