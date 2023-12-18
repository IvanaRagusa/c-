#include "ScalarConverter.hpp"
#include <iostream>
#include <ostream>
#include <algorithm>

int	main( int argc, char *argv[])
{
    if (argc != 2)
        std::cout << "invalid input" << std::endl;
    else
	    ScalarConverter::convert(argv[1]);
}