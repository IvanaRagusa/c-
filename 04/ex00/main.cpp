#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

std::cout << std::endl << "\033[1;37mRight calls\n" << std::endl;

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "Dog type: " << j->getType() << " " << std::endl;
std::cout << "Cat type: " << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();
delete j;
delete i;
delete meta;

std::cout << std::endl << "\033[1;37mWrong calls\n" << std::endl;

const WrongAnimal* wrong = new WrongAnimal();
const WrongAnimal* w = new WrongCat();
const WrongCat* v = new WrongCat;
wrong->makeSound();
w->makeSound(); 
v->makeSound();
delete wrong;
delete w;
delete v;
return 0;
}