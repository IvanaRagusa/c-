#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget &other) 
{
    *this = other;
}

ATarget & ATarget::operator=(const ATarget &other) 
{
    _type = other._type;
    return (*this);
}

ATarget::~ATarget() {}

ATarget::ATarget(const std::string &type) : _type(type) {}

const std::string & ATarget::getType() const
{
    return(_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}