# include "Span.hpp"
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    try 
    {
        std::cout << "---------------subject test standard----------------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(6);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
    try 
    {
        std::cout << "\n---------------10000 test standard----------------" << std::endl;
        Span sp = Span(10000);
        for (int i = 0; i < 10000; i++)
        {
            int ran = std::rand();
            sp.addNumber(ran);
        }
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest Span : " << sp.longestSpan() << std::endl;
        std::cout << "\n---------------try to add num in full vector----------------" << std::endl;
        sp.addNumber(6);
    }
    catch (std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
    try 
    {
        std::cout << "\n---------------try shortspan on empty vector----------------" << std::endl;
        Span sp = Span(10);
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;

    }
    catch (std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
    return (0);
}

/*OUTOUT SUBJECT
2
14
*/

