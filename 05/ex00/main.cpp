#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	std::cout << "\n\033[1;31m---------try to create a Buro grade -8-----------\033[0m" << std::endl;
	try
	{
		Bureaucrat schiavissimo("schiavissimo", -8);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown : " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception thrown";
	}

	std::cout << "\n\033[1;32m---------try to create a Buro grade 76-----------\033[0m" << std::endl;

	try
	{
		Bureaucrat unobuono("unobuono", 76);
		for (int i = 0; i > 77; i++)
			unobuono.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown : " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception thrown";
	}
	std::cout << "\033[1;32m----unobuono grade 76 incremented to grade 1-----\033[0m" << std::endl;

	std::cout << "\n\033[1;35m-----------overload << Buro grade 80-------------\033[0m" << std::endl;
	try
	{
		Bureaucrat unopiumeglio("unopiumeglio", 80);
		std::cout << unopiumeglio << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown : " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception thrown" << std::endl;
	}

	std::cout << "\n\033[1;36m---------try to increment buro grade 1-----------\033[0m" << std::endl;
	try
	{
		Bureaucrat Topg("Topg", 1);
		std::cout << Topg << std::endl;
		Topg.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown : " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception thrown" << std::endl;
	}

	std::cout << "the end" << std::endl;

	return (0);
}