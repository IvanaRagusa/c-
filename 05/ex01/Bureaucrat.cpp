
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

/*Bureaucrat class*/

Bureaucrat::Bureaucrat() : _name("newBureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) 
{
    if (grade < 1)
       throw Bureaucrat::GradeTooHighException("grade too high");
    else if (grade > 150)
       throw Bureaucrat::GradeTooLowException("grade too low");
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) 
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& Bureaucrat) {
    if (this != &Bureaucrat) {
        this->_grade = Bureaucrat._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::get_name() const
{
    return (_name);
}

int Bureaucrat::get_grade() const
{
    return (_grade);
}

void Bureaucrat::set_grade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException("grade too high");
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException("grade too low");
    else
        this->_grade = grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
       throw Bureaucrat::GradeTooHighException("grade too high, not incrementable");
    else 
        this->_grade--;

}

void Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
       throw Bureaucrat::GradeTooLowException("grade too low, not decrementable");
    else 
        this->_grade++;
}


/*Myexception class*/

Bureaucrat::GradeTooHighException::GradeTooHighException() : _msg("grade too high") {}

Bureaucrat::GradeTooLowException::GradeTooLowException() : _msg("grade too high") {}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException& tooHigh)
{
    *this = tooHigh;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException& tooLow)
{
    *this = tooLow;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (_msg.c_str());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (_msg.c_str());
}

/*overload <<*/

std::ostream	&operator<<( std::ostream &os, Bureaucrat const &buro)
{
	os << buro.get_name() << ", Bureaucrat grade " << buro.get_grade() << ".";
	return (os);
}

void		Bureaucrat::signForm(Form& form) const
{
	if (form.get_IsSigned())
	{
		std::cout << *this << " couldn't sign " << form << ", form already signed." << std::endl;
	}
	else if (form.get_gradeSign() < this->get_grade())
	{
		std::cout << *this << " couldn't sign " << form << ", he hasn't required grade." << std::endl;
	}
	else
	{   
        form.beSigned (*this);
		std::cout << *this << " signed " << form << std::endl;
	}
    
}
