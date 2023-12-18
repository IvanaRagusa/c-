#ifndef INTERN
#define INTERN

# include "AForm.hpp"
# include <iostream>
# include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Aform;

class Intern
{
	public:
	
	Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);
	~Intern();
	AForm *makeForm(const std::string &formName, const std::string &target) const;
};

#endif