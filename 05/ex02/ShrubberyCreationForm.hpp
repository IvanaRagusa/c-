#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
	
	std::string	_target;
	ShrubberyCreationForm();
	
	public:
	
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& Shrubbery);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& Shrubbery);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};




#endif