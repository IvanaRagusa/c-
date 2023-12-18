# include "RobotomyRequestForm.hpp"

class Aform;

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
 AForm("RobotomyRequestForm", 75, 42), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Shrubbery) 
{
    *this = Shrubbery;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& Shrubbery)
{
    if (this != &Shrubbery)
    {
    }
    return(* this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    try
    {
        checkForm(executor);
        static int  i;
        if ( i % 2 == 0 )
        {
            std::cout << "Oh no, what a mess! **DRILLING NOISE** " << std::endl;
            std::cout << "un sacco di **DRILLING NOISE** " << std::endl;
            std::cout << "un sacco assai di **DRILLING NOISE** " << std::endl;
            std::cout << this->_target << " has been robotomized, poor form!" << std::endl;
        }
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
        i++;
        std::cout << executor << " executed " << _target << std::endl;
    }
	catch(std::exception & e)
	{
		std::cout << "Oh, no " << executor << " can't execute " << _target << " becaaaaaause : " << e.what() << std::endl;
	}    
}