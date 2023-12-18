 #include "MateriaSource.hpp"
 
MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& Other)
{
    *this = Other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
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
        }
    }
    return(*this);    
    }

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if(!slot[i])
            break;
        i++;
    }
    if (i < 4)
        slot[i] = m;
    else
        delete m;
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < 4)
    {
        if(this->slot[i] != NULL && this->slot[i]->getType() == type)
            return (slot[i]->clone());
        i++;
    }
    return (0);  
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        if(slot[i] != NULL)
            delete slot[i];
        i++;
    }
}