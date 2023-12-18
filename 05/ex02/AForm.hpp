
#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    std::string const  _name;
    bool               _signed;
    int const          _gradeSign;
    int const          _gradeExe;

public:
    AForm();
    AForm(const std::string name, int gradexe, int gradesign);
    AForm(const AForm& AForm);
    virtual ~AForm();
    AForm& operator=(const AForm& AForm);
    const std::string get_name() const;
    int get_gradeSign() const;
    int get_gradeExe() const;
    bool get_IsSigned() const;
    void set_Sign(bool sign);
    class Exception : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
    class FormNotSignedException : public std::exception
    {
        private:
        std::string _msg;

        public:
        FormNotSignedException();
        FormNotSignedException(std::string msg);
        virtual ~FormNotSignedException() throw ();
        virtual const char* what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        private:
        std::string _msg;

        public:
        GradeTooHighException();
        GradeTooHighException(std::string msg);
        GradeTooHighException(const GradeTooHighException& tooHigh);
        virtual ~GradeTooHighException() throw ();
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        private:
        std::string _msg;

        public:
        GradeTooLowException();
        GradeTooLowException(std::string msg);
        GradeTooLowException(const GradeTooLowException& tooLow);
        virtual ~GradeTooLowException() throw ();
        virtual const char* what() const throw();
    };
void beSigned(Bureaucrat const &buro) throw(GradeTooLowException);
void checkForm(Bureaucrat const & executor) const;
virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<( std::ostream &os, const AForm &Aform);

#endif
