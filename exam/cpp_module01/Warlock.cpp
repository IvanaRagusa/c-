
#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

Warlock::Warlock() {}
Warlock::Warlock(const Warlock &) {}
Warlock & Warlock::operator=(const Warlock &) { return (*this);}

Warlock::~Warlock() 
{

        std::vector<ASpell *>::iterator ite = spells.end();
        for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
        {
                delete(*it);
        }
        spells.clear();
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
    if(spell) {
        std::vector<ASpell *>::iterator ite = spells.end();
        for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
        {
            if ((*it)->getName() == spell->getName())
                return ;
        }
    }
    spells.push_back(spell->clone());
}
void Warlock::forgetSpell(const std::string spellname)
{
    std::vector<ASpell *>::iterator ite = spells.end();
    for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
    {
        if ((*it)->getName() == spellname)
        {
            delete(*it);
            this->spells.erase(it);
        }
    }
}

void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
    std::vector<ASpell *>::iterator ite = spells.end();
    for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
    {
        if ((*it)->getName() == spellname)
        {
            (*it)->launch(target);
        }
    }
}
