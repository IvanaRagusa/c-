#include "Form.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	std::cout << "\n\033[1;34mCONSTRUCTING:\033[0m" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat ciro("ciro", 1);
	Bureaucrat franco("franco", 132);

	Bureaucrat &ciro_ref = ciro;
	Bureaucrat &franco_ref = franco;

	Form a("A13", 4, 6);
	Form b("B97", 146, 135);

	// Create a Form with grades too low

	try
	{
		Form c("C46", 489, 1435);
	}
	catch (const std::exception &e)
	{
		std::cerr << "constructor Form failed " << e.what() << '\n';
	}

	// Create a grade with grades too high
	try
	{
		Form d("D143", -583, -800);
	}
	catch (const std::exception &e)
	{
		std::cerr << "constructor Form failed " << e.what() << '\n';
	}

	std::cout << std::endl
			  << std::endl;

	// Sign forms
	std::cout << std::endl;
	std::cout << "\033[1;36mSIGN FORMS:\033[0m" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// Sign OK
	std::cout << "\033[32mSIGN OK:\033[0m" << std::endl;
	ciro_ref.signForm(a);
	std::cout << a << std::endl;
	// a.set_Sign(false);
	std::cout << std::endl
			  << std::endl;

	// Sign KO
	std::cout << "\033[31mSIGN KO:\033[0m" << std::endl;
	franco_ref.signForm(a);
	std::cout << a << std::endl;
	std::cout << std::endl
			  << std::endl;

	// Sign OK
	std::cout << "\033[32mSIGN OK:\033[0m" << std::endl;
	ciro.signForm(b);
	std::cout << b << std::endl;
	b.set_Sign(false);
	std::cout << std::endl
			  << std::endl;

	// Sign OK
	std::cout << "\033[32mSIGN OK:\033[0m" << std::endl;
	franco.signForm(b);
	std::cout << b << std::endl;
	std::cout << std::endl
			  << std::endl;

	std::cout << std::endl;
	std::cout << "\n\033[1;31mDESTRUCTORS: tt'appo'\033[0m" << std::endl;
	std::cout << "----------------------------" << std::endl;
	return (0);
	//-------------------------------------------------------
}