# include "PresidentialPardonForm.hpp"

class Aform;

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
 AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& President) 
{
    *this = President;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& President)
{
    if (this != &President)
    {
    }
    return(* this);
}

AForm *PresidentialPardonForm::newform(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        checkForm(executor);
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox..." << std::endl;
        std::cout << executor << " executed " << _target << std::endl;
    }
	catch(std::exception & e)
	{
		std::cout << "Oh, no " << executor << " can't execute " << _target << " becaaaaaause : " << e.what() << std::endl;
	}    
}