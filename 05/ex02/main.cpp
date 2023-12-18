#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{

    try
    {
        Bureaucrat bureaucrat("Ciro", 2);
        Bureaucrat poraccio("Frango", 150);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n---------------  \033[1;32mShrubbery OK \033[0m ---------------" << std::endl;
        bureaucrat.signForm(form1);
        std::cout << std::endl;
        bureaucrat.executeForm(form1);
        std::cout << std::endl;

        std::cout << "\n---------------  \033[1;32mRobotomy OK \033[0m---------------" << std::endl;
        bureaucrat.signForm(form2);
        std::cout << std::endl;
        bureaucrat.executeForm(form2);
        std::cout << std::endl;
        bureaucrat.executeForm(form2);
        std::cout << std::endl;
        bureaucrat.executeForm(form2);
        std::cout << std::endl;
        bureaucrat.executeForm(form2);
        std::cout << std::endl;
        std::cout << "\n---------------  \033[1;32mPresident OK \033[0m---------------" << std::endl;
        bureaucrat.signForm(form3);
        std::cout << std::endl;
        bureaucrat.executeForm(form3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bureaucrat("Ciro", 2);
        Bureaucrat poraccio("Frango", 150);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n---------------  \033[1;31mShrubbery KO \033[0m ---------------" << std::endl;
        form1.set_Sign(true);
        bureaucrat.signForm(form1); // already signed
        std::cout << std::endl;
        poraccio.executeForm(form1); // gradetolow
        std::cout << std::endl;
        std::cout << "\n---------------  \033[1;31mRobotomy KO \033[0m---------------" << std::endl;
        poraccio.signForm(form2); // grade too low
        std::cout << std::endl;
        poraccio.executeForm(form2); // not signed
        std::cout << "\n---------------  \033[1;31mPresident KO\033[0m ---------------" << std::endl;
        bureaucrat.signForm(form3);
        std::cout << std::endl;
        poraccio.signForm(form3);
        std::cout << std::endl;
        poraccio.executeForm(form3);
        std::cout << "\n--------------- \033[1;35mTt Appppooooooooooooooooooo \033[0m---------------" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 1;
}