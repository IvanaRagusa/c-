
#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

Warlock::Warlock() {}
Warlock::Warlock(const Warlock &) {}
Warlock & Warlock::operator=(const Warlock &) { return (*this);}

Warlock::~Warlock() 
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
const std::string & Warlock::getName() const
{
    return(_name);
}
const std::string & Warlock::getTitle() const
{
        return(_title);
}
void Warlock::setTitle(const std::string &title) 
{
        this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    spells.learnSpell(spell);
}
void Warlock::forgetSpell(const std::string spellname)
{
    spells.forgetSpell(spellname);
}

void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
        ASpell *spell = spells.createSpell(spellname);
        if(spell)
            spell->launch(target);
}
