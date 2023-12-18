
#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}
TargetGenerator::TargetGenerator(const TargetGenerator &) {}
TargetGenerator & TargetGenerator::operator=(const TargetGenerator &) { return (*this);}

TargetGenerator::~TargetGenerator() 
{

        std::vector<ATarget *>::iterator ite = targets.end();
        for (std::vector<ATarget *>::iterator it = targets.begin(); it < ite; it++)
        {
                delete(*it);
        }
        targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target) {
        std::vector<ATarget *>::iterator ite = targets.end();
        for (std::vector<ATarget *>::iterator it = targets.begin(); it < ite; it++)
        {
            if ((*it)->getType() == target->getType())
                return ;
        }
    }
    targets.push_back(target->clone());
}
void TargetGenerator::forgetTargetType(const std::string &type)
{
    std::vector<ATarget *>::iterator ite = targets.end();
    for (std::vector<ATarget *>::iterator it = targets.begin(); it < ite; it++)
    {
        if ((*it)->getType() == type)
        {
            delete(*it);
            this->targets.erase(it);
        }
    }
}

ATarget *TargetGenerator::createTarget(const std::string &type)
{
    std::vector<ATarget *>::iterator ite = targets.end();
    for (std::vector<ATarget *>::iterator it = targets.begin(); it < ite; it++)
    {
        if ((*it)->getType() == type)
        {
            return (*it);
        }
    }
    return (NULL);
}
