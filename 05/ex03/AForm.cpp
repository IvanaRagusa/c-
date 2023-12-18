
#include "AForm.hpp"

/*AForm class*/

AForm::AForm() : _name("newAForm"), _signed(false), _gradeSign(150), _gradeExe(100) {}

AForm::AForm(const std::string name, int gradexe , int gradesign) : _name(name), _signed(false), _gradeSign(gradesign), _gradeExe(gradexe)
{
    if (_gradeExe < 1 || _gradeSign < 1)
       throw AForm::GradeTooHighException("grade too high");
    else if (_gradeExe > 150 || _gradeSign > 150)
       throw AForm::GradeTooLowException("grade too low");
}

AForm::AForm(const AForm& other): _name(other._name), _signed(other._signed), \
_gradeSign(other._gradeSign), _gradeExe(other._gradeExe)
{
    *this = other;
}

AForm& AForm::operator=(const AForm& AForm) {
    if (this != &AForm)
    {}
    return *this;
}

AForm::~AForm() {}

const std::string AForm::get_name() const
{
    return (_name);
}

int AForm::get_gradeSign() const
{
    return (_gradeSign);
}

int AForm::get_gradeExe() const
{
    return (_gradeExe);
}

void AForm::beSigned(Bureaucrat const &buro ) throw(AForm::GradeTooLowException)
{
	if (this->_gradeSign >= buro.get_grade())
		this->_signed = true;
	else
		throw (AForm::GradeTooLowException("Bureaucrat can't sign, grade too low"));
}

bool AForm::get_IsSigned() const
{
    return(this->_signed);
}

void AForm::set_Sign(bool sign)
{
    this->_signed = sign;
}

void AForm::checkForm(const Bureaucrat& executor) const
{
    if (this->get_IsSigned() == false)
    {
        throw (FormNotSignedException("Form not signed..."));
    }
	if (this->get_gradeExe() < executor.get_grade())
    {
        throw (GradeTooLowException("grade too low..."));
    }
    
}
/*Myexception class*/

AForm::FormNotSignedException::FormNotSignedException() : _msg("Form not signed") {}

AForm::FormNotSignedException::FormNotSignedException(std::string msg) : _msg(msg) {}

AForm::GradeTooHighException::GradeTooHighException() : _msg("grade too high") {}

AForm::GradeTooLowException::GradeTooLowException() : _msg("grade too high") {}

AForm::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

AForm::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

AForm::GradeTooHighException::~GradeTooHighException() throw() {}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

AForm::FormNotSignedException::~FormNotSignedException() throw() {}

AForm::GradeTooHighException::GradeTooHighException(const GradeTooHighException& tooHigh)
{
    *this = tooHigh;
}

const char* AForm::Exception::what() const throw()
{
    return ("AForm Exception ");
}

AForm::GradeTooLowException::GradeTooLowException(const GradeTooLowException& tooLow)
{
    *this = tooLow;
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}

/*overload <<*/

std::ostream	&operator<<( std::ostream &os, AForm const &Aform)
{
    os << "Form name: " 
	   << Aform.get_name() 
	   << ". Grade to sign: " 
	   << Aform.get_gradeSign() 
	   << ", grade to exec: " 
	   << Aform.get_gradeExe() 
	   << "." 
	   << "\033[0m";
	return (os);
}