#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

private:
    Brain* brain;

public:
    Cat();
    ~Cat();
    Cat(const Cat& Cat);
    Cat& operator=(const Cat& Cat);
    const std::string get_ideas(int i) const;
    void set_ideas ( const std::string &idea, int i);
    void makeSound() const ;
};

#endif
