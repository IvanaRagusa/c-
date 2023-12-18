#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    int lucky;
    srand(time(0));
    lucky = rand() % 3; //genera un numero casuale tra 0 e 2

    switch(lucky) 
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        default:
            return (new C());
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "type A" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "type B" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "type C" << std::endl;
    }
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "type A" << std::endl;
        return;
    }
    catch(...) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "type B" << std::endl;
        return;
    }
    catch(...) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "type C" << std::endl;
        return;
    }
    catch(...) {}
}

int     main( void )
{
    Base*   first = generate();
    sleep(1);
    Base*   second = generate();
    sleep(1);
    Base*   third = generate();

    std::cout << "/* ***** 3 random obj generated ***** */" << std::endl;

    std::cout << "/* ******************* ptr ********************* */" << std::endl;

    std::cout << "first ptr = "; 
    identify( first );
    std::cout << "second ptr = ";
    identify( second );
    std::cout << "third ptr = ";
    identify( third );

    std::cout << "/* ******************** ref ********************* */" << std::endl;
    
    std::cout << "first ref = ";
    identify( *first ); std::cout << std::endl;
    std::cout << "second ref = ";
    identify( *second ); std::cout << std::endl;
    std::cout << "third ref = ";
    identify( *third ); std::cout << std::endl;

    
    std::cout << "/* ****************** tt'appo ******************** */" << std::endl;


    delete first;
    delete second;
    delete third;

    return 0;
}