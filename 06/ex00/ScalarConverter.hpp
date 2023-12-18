
#ifndef SCALARCONVERTER
#define SCALARCONVERTER

# include <stdlib.h>
# include <iostream>
# include <exception>
# include <string> 
# include <sstream>
# include <iomanip>
# include <istream>
#include <algorithm>

class ScalarConverter
{
    private:

    ScalarConverter();
    ScalarConverter(const ScalarConverter& converter);
    ScalarConverter& operator=(const ScalarConverter& converter);
    ~ScalarConverter();
    static void printChar(const std::string& literal);
    static void printNum(const std::string& literal);
    static void printDouble(const std::string& literal);
    static void printFloat(const std::string& literal);
    static bool validInput(const std::string& literal);

    public:
  
    static void convert(const std::string& literal);
};

#endif