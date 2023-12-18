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
	RobotomyRequestForm(const RobotomyRequestForm& Robotomy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& Robotomy);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
	static AForm *newform(const std::string target);
};

#endif