
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <ostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
protected:
    const std::string   _name;
    int                 _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& Bureaucrat);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& Bureaucrat);
    const std::string get_name() const;
    int get_grade() const;
    void set_grade(int grade);
    void incrementGrade();
    void decrementGrade();
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
    void    signForm(AForm& Aform) const;
    void    executeForm(AForm const & form) const;
};

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &buro);

#endif
