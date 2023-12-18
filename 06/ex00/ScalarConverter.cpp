#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& ){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& ){
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::printChar(const std::string& literal)
{
    std::istringstream iss(literal);
    int                num = literal[0];

    if (isdigit(literal[0]))
        num -= 48;    
    if ((num < 0 || num > 31))
        std::cout << "char: " << static_cast<char>(num) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double: " << std::fixed  << static_cast<double>(num) << std::endl;
}

void ft_check_char(int num, std::string& literal)
{
    std::istringstream iss(literal);
    if (!(iss >> num) || num > 127 || num < 1)
        std::cout << "char: impossible" << std::endl;
    else if(!(num > 31 && num < 127))
        std::cout << "char: Non displeyable" << std::endl;
    else 
        std::cout << "char: " << static_cast<char>(num) << std::endl;
}

void ft_check_int (int num, std::string& literal)
{
    char c;

    std::istringstream iss(literal);
    if (!(iss >> num))
        std::cout << "int: impossible" << std::endl;
    else if (!iss.eof())
    {
        if ((iss >> c) && c == '.')
            std::cout << "int: " << num << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
    }
    else 
        std::cout << "int: " << num << std::endl;
}

void ft_check_float(std::string& literal)
{
    float f;

    std::istringstream iss(literal);

    if (!literal.compare("nan") || !literal.compare("inf") || !literal.compare("-inf"))
        std::cout  << "float: " << literal << "f" << std::endl;
    else if (!(iss >> f) && (iss.fail() || !iss.eof()))
        std::cout << "float: impossible" << std::endl;
    else if (f == static_cast<int>(f))
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
    else
        std::cout  << "float: " << std::fixed << static_cast<float>(f) << "f" << std::endl;
}

void ft_check_double(std::string& literal)
{
    double d;

    std::istringstream iss(literal);

    if (!literal.compare("nan") || !literal.compare("inf") || !literal.compare("-inf"))
        std::cout  << "double: " << literal << std::endl;
    else if (!(iss >> d) && (iss.fail() || !iss.eof()))
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed  << static_cast<double>(d) << std::endl;       
}

void ScalarConverter::printNum(const std::string& literal)
{ 
    int num = 0;

    std::string temp(literal);
    
    if (literal.find("f") != std::string::npos)
        temp = temp.substr(0, temp.length() -1);
    std::istringstream iss(temp);
    ft_check_char(num, temp);
    ft_check_int(num, temp);
    ft_check_float(temp);
    ft_check_double(temp);
}

void ScalarConverter::convert(const std::string& literal)
{
    int point = 0;
    int f = 0;
    int min = 0;
    std::string val = ".-f\0";

    if (literal.length() == 1)
        printChar(literal);
    else
    {
        if (!(!literal.compare("nan") || !literal.compare("inf") || !literal.compare("-inf")))
        {
            for (size_t i = 0; i < literal.length(); i++)
            {
                char c = literal[i];
                if (!((c >= '0' && c <= '9') || c == '.' || c == 'f' || c == '-')
                    || ((c == '-') && !(i == 0 && isdigit(literal[1])))
                    || ((c == 'f') && !(i == literal.length() - 1)))
                {
                    std::cout << "invalid input" << std::endl;
                    exit(1);
                }
            }
            for (int j = 0; j < 3; j++)
            {
                int count = std::count(literal.begin(), literal.end(), val[j]);
                if(count > 1)
                {
                    std::cout << "invalid input" << std::endl;
                    exit(1);
                }
            }
            if (point > 1 || f > 1 || min > 1)
            {
                std::cout << "invalid input" << std::endl;
                exit(1);
            }
        }
        printNum(literal);
    }
}