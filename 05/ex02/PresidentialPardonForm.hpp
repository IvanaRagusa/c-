#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
	
	std::string	_target;
	PresidentialPardonForm();
	
	public:
	
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& Shrubbery);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& Shrubbery);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};




#endif