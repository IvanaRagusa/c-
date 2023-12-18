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
	PresidentialPardonForm(const PresidentialPardonForm& President);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& President);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
	static AForm *newform(const std::string target);
};




#endif