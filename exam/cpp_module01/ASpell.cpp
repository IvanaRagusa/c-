#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &other) 
{
    *this = other;
}

ASpell & ASpell::operator=(const ASpell &other) 
{
    _name = other._name;
    _effects = other._effects;
    return (*this);
}

ASpell::~ASpell() {}

ASpell::ASpell(const std::string &name, const std::string &effects) : 
_name(name), _effects(effects) {}

const std::string & ASpell::getName() const
{
    return(_name);
}

const std::string & ASpell::getEffects() const
{
    return(_effects);
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}