#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

private:
    Brain* brain;

public:
    Dog();
    ~Dog();
    Dog(const Dog& Dog);
    Dog& operator=(const Dog& Dog);
    const std::string get_ideas(int i) const;
    void set_ideas ( const std::string &idea, int i);
    void makeSound() const ;
};

#endif
