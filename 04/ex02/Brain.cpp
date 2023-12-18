
#include "Brain.hpp"

Brain::Brain() {
     std::cout << "\033[1;33mCostruttore Brain chiamato\033[0m" << std::endl;
}

Brain::Brain(const Brain& Other) {
    
    *this = Other;
}

Brain& Brain::operator=(const Brain& Other) {
    if (this != &Other) 
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = Other._ideas[i];
    }
    return *this;
}

const std::string Brain::get_ideas(int i)
{
    return(_ideas[i]);
}

void Brain::set_ideas ( const std::string &idea, int i)
{
    _ideas[i] = idea;
}

Brain::~Brain() {
    std::cout << "\033[1;33mDistruttore Brain chiamato\033[0m" << std::endl;
}