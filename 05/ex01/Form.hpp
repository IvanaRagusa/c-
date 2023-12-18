
#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string const  _name;
    bool               _signed;
    int const          _gradeSign;
    int const          _gradeExe;

public:
    Form();
    Form(const std::string name, int gradexe, int gradesign);
    Form(const Form& Form);
    ~Form();
    Form& operator=(const Form& Form);
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
};

std::ostream	&operator<<( std::ostream &os, const Form &form);

#endif
