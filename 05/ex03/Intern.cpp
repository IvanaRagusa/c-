# include "Intern.hpp"


class Aform;

Intern::Intern()
{}

Intern::Intern(const Intern& intern) 
{
    *this = intern;
}

Intern& Intern::operator=(const Intern& intern)
{
    if (this != &intern)
    {
    }
    return(* this);
}

Intern::~Intern() {}

AForm *Intern::makeForm( const std::string &formName, const std::string &target) const
{
    std::string listName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*f[])(const std::string target) = {&ShrubberyCreationForm::newform, &RobotomyRequestForm::newform, &PresidentialPardonForm::newform};
    std::string listForm[3] = {"shrubbery", "robotomy", "presidential"};
    int i;

    for (i = 0; i < 3; i++) 
    {
		if (!listName[i].compare(formName) || !listForm[i].compare(formName))
        {
			std::cout << "Intern creates " << listForm[i] << " Form." << std::endl;
			return (f[i](target));
		}
	}
	std::cout << "Form not found" << std::endl;
	return (NULL);

}