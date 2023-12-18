#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

/*

Funzione virtuale in C++:
- Una funzione virtuale in C++ è una funzione membro nella classe base che viene ridefinita
  in una classe derivata. Viene dichiarata utilizzando la parola chiave virtual.
- Serve per indicare al compilatore di eseguire il collegamento dinamico sulla funzione.
- È necessario utilizzare un singolo puntatore per fare riferimento a tutti gli oggetti delle
  diverse classi. Quindi creiamo un puntatore alla classe base che fa riferimento a tutti 
  gli oggetti derivati. Tuttavia, quando il puntatore alla classe base contiene l'indirizzo
  dell'oggetto della classe derivata, viene sempre eseguita la funzione della classe base. Questo
  problema può essere risolto solo utilizzando la funzione 'virtuale'.
- 'Virtual' è la parola chiave che precede la normale dichiarazione di una funzione.
- Quando la funzione viene resa virtuale, C++ determina quale funzione invocare
  durante l'esecuzione in base al tipo dell'oggetto puntato dal puntatore della classe base.

*/

/* virtual significa che il collegamento sarà dinamico e non statico
   Spiegazione:
   All'inizio, avevamo una risoluzione statica delle chiamate alle funzioni, il che significa che
   durante la compilazione il compilatore sa già quale funzione chiamare..
   E per questo utilizziamo il tipo di variabile.
   L'unico modo per il compilatore di conoscere il comportamento del mio oggetto è conoscere il suo tipo
   che abbiamo contrassegnato come stringa.
   Pertanto, utilizza la versione stringa della funzione.
   Era un collegamento statico! significa che durante la compilazione viene determinato che non cambierà in seguito.
   Tuttavia, durante la compilazione supponiamo di non volerlo come Cane, ma come Gatto.
   può puntare su un cane una volta e su un gatto un'altra volta in base all'input dell'utente.
   Grazie alla parola chiave 'virtuale', la risoluzione della chiamata alla funzione sarà dinamica e verrà
   decisa al momento dell'esecuzione.

   Quando chiamiamo la funzione membro, durante l'esecuzione, poiché è una funzione con
   un collegamento dinamico, cercherà il tipo effettivo dell'oggetto. Percorrerà
   l'albero di ereditarietà per trovare il tipo effettivo.

   Una funzione membro virtuale viene chiamata metodo.
   La definizione di un metodo è una funzione membro il cui collegamento sarà dinamico.

Regole delle funzioni virtuali:

    - Le funzioni virtuali devono essere membri di qualche classe.
    - Le funzioni virtuali non possono essere membri statici.
    - Sono accessibili tramite puntatori ad oggetti.
    - Possono essere friend class di un'altra classe 
      (una classe che ha accesso alle informazioni private e protette di un'altra classe.)
    - Una funzione virtuale deve essere definita nella classe base, anche se non viene utilizzata.
    - I prototipi di una funzione virtuale della classe base e di tutte le classi derivate
      devono essere identici. Se le due funzioni hanno lo stesso nome ma prototipi diversi,
      C++ le considererà come funzioni sovraccaricate.
    - Non possiamo avere un costruttore virtuale, ma possiamo avere un distruttore virtuale
      Dichiarando il distruttore come virtuale nella classe base, 
      ci assicuriamo che durante la deallocazione di un oggetto polimorfo, 
      il distruttore corretto per quella classe specifica venga chiamato, 
      garantendo così una distruzione corretta e prevenendo potenziali problemi.

*/

/*
    L'ordine di chiamata del costruttore e del distruttore:
        1. Costruttore della classe base
        2. Costruttore della classe derivata
        3. Distruttore della classe derivata
        4. Distruttore della classe base
*/




int main( void )
{
    std::cout << "\ncostruttori versi e distruttori\n" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    j->makeSound();
    i->makeSound();
   
    delete j;//non ci devono essere leak!
    delete i;
    std::cout << "\ncopia di un cane che pensa\n" << std::endl;

    Dog *basic = new Dog();
    {
        basic->set_ideas("basic pensa intensamente", 1);
        basic->set_ideas("basic pensa ancora intensamente", 2);
    }
    Dog tmp = *basic;
    std::cout << "\nbasic ideas: " << basic->get_ideas(1) << std::endl;
    delete basic;
    std::cout << "tmp 1 ideas: " << tmp.get_ideas(1) << std::endl;
    std::cout << "tmp 2 ideas: " << tmp.get_ideas(2) << std::endl;
    
    std::cout << "\nAltri costruttori e distruttori\n" << std::endl;
    
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}