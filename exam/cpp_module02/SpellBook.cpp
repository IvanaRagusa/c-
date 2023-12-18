
#include "SpellBook.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

SpellBook::SpellBook() {}
SpellBook::SpellBook(const SpellBook &) {}
SpellBook & SpellBook::operator=(const SpellBook &) { return (*this);}

SpellBook::~SpellBook() 
{

        std::vector<ASpell *>::iterator ite = spells.end();
        for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
        {
                delete(*it);
        }
        spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
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
void SpellBook::forgetSpell(const std::string &spellname)
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

ASpell *SpellBook::createSpell(const std::string &spellname)
{
    std::vector<ASpell *>::iterator ite = spells.end();
    for (std::vector<ASpell *>::iterator it = spells.begin(); it < ite; it++)
    {
        if ((*it)->getName() == spellname)
        {
            return (*it);
        }
    }
    return (NULL);
}
