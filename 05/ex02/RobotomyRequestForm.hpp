#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
	
	std::string	_target;
	RobotomyRequestForm();
	
	public:
	
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& Shrubbery);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& Shrubbery);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};

#endif