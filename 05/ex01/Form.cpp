
#include "Form.hpp"

/*Form class*/

Form::Form() : _name("newForm"), _signed(false), _gradeSign(150), _gradeExe(100) {}

Form::Form(const std::string name, int gradexe , int gradesign) : _name(name), _signed(false), _gradeSign(gradesign), _gradeExe(gradexe)
{
    if (_gradeExe < 1 || _gradeSign < 1)
       throw Form::GradeTooHighException("grade too high");
    else if (_gradeExe > 150 || _gradeSign > 150)
       throw Form::GradeTooLowException("grade too low");
}

Form::Form(const Form& other): _name(other._name), _signed(other._signed), \
_gradeSign(other._gradeSign), _gradeExe(other._gradeExe)
{
    *this = other;
}

Form& Form::operator=(const Form& Form) {
    if (this != &Form)
    {}
    return *this;
}

Form::~Form() {}

const std::string Form::get_name() const
{
    return (_name);
}

int Form::get_gradeSign() const
{
    return (_gradeSign);
}

int Form::get_gradeExe() const
{
    return (_gradeExe);
}

void Form::beSigned(Bureaucrat const &buro ) throw(Form::GradeTooLowException)
{
	if (this->_gradeSign >= buro.get_grade())
		this->_signed = true;
	else
		throw( Form::GradeTooLowException("Bureaucrat can't sign, grade too low"));
}

bool Form::get_IsSigned() const
{
    return(this->_signed);
}

void Form::set_Sign(bool sign)
{
        this->_signed = sign;
}

/*Myexception class*/

Form::GradeTooHighException::GradeTooHighException() : _msg("grade too high") {}

Form::GradeTooLowException::GradeTooLowException() : _msg("grade too high") {}

Form::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

Form::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException& tooHigh)
{
    *this = tooHigh;
}

const char* Form::Exception::what() const throw()
{
    return ("Form Exception ");
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException& tooLow)
{
    *this = tooLow;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

/*overload <<*/

std::ostream	&operator<<( std::ostream &os, Form const &form)
{
    os << "Form name: " 
	   << form.get_name() 
	   << ". Grade to sign: " 
	   << form.get_gradeSign() 
	   << ", grade to exec: " 
	   << form.get_gradeExe() 
	   << "." 
	   << "\033[0m";
	return (os);
}