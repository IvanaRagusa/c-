#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {

public:
    Cat();
    ~Cat();
    Cat(const Cat& Cat);
    Cat& operator=(const Cat& other);
    void makeSound() const ;
};

#endif
