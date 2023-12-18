#include "Character.hpp"
 
Character::Character(std::string const & name) : name(name)
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
    for (int i = 0; i < 50; i++)
        scarto[i] = NULL;
}

Character::Character() 
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
    for (int i = 0; i < 50; i++)
        scarto[i] = NULL;
}

Character::Character(const Character& Other)
{
    *this = Other;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->slot[i] != NULL)
            {
                delete this->slot[i];
                this->slot[i] = NULL;
            }
            if (other.slot[i] != NULL)
                this->slot[i] = other.slot[i]->clone();
            if (this->scarto[i] != NULL)
            {
                delete this->scarto[i];
                this->scarto[i] = this->slot[i];
            }
        }
        this->name = other.name;
    }
    return(*this);    
}

std::string const & Character::getName() const
{
    return(this->name);
}

void Character::equip(AMateria* m)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if(!slot[i])
            break;
    }
    if (i < 4 && m != NULL)
        slot[i] = m;
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->scarto[i] == NULL)
            {
                this->scarto[i] = m;
                break;
            }
        }
    }
}
void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        std::cout << "metti indice tra 0 e 3";
    else if (slot[idx] != NULL)
        slot[idx] = NULL;    
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx < 4 && idx > -1 && slot[idx] != NULL)
        slot[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if(slot[i] != NULL)
            delete slot[i];
    for (int i = 0; i < 50; i++)
        if(scarto[i] != NULL)
            delete scarto[i];
}