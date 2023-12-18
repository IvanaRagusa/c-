#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

/*
Funzione virtuale in C++:
Una classe astratta è una classe che non può essere istanziata direttamente, 
ma può essere utilizzata solo come superclasse per altre classi derivate.
una classe astratta è una classe contiene almeno un metodo virtuale puro(non impementato).
*/

int main( void )
{
    // std::cout << "\033[1;33m\ncostruttori Astratti\n" << std::endl;

    //const AAnimal* j = new AAnimal(); NUN SE PO'

    std::cout << "\033[1;38m\ncopia di un cane che pensa\n\033[0m" << std::endl;

    Dog *basic = new Dog();
    {
        basic->set_ideas("\033[1;38mbasic pensa intensamente\033[0m", 1);
        basic->set_ideas("\033[1;38mbasic pensa ancora intensamente\033[0m", 2);
    }
    Cat *miao = new Cat;
    
    std::cout << "\033[1;38m\nversi delle bestie\n\033[0m" << std::endl;
    
    miao->makeSound();
    basic->makeSound();
    
    Dog tmp = *basic;
    std::cout << "\033[1;38m\nbasic ideas: " << basic->get_ideas(1) << std::endl << std::endl;
    delete basic;
    std::cout << "\033[1;38mtmp 1 ideas: " << tmp.get_ideas(1) << std::endl;
    std::cout << "\033[1;38mtmp 2 ideas: " << tmp.get_ideas(2) << std::endl;
    delete miao;
}
  