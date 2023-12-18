#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    {
        Intern someRandomIntern;
        AForm *rrf1;
        AForm *rrf2;
        AForm *rrf3;
        AForm *rrf4;

        std::cout << "\n---------------  \033[1;32mForm OK \033[0m ---------------" << std::endl;
        rrf1 = someRandomIntern.makeForm("shrubbery", "Bender");
        rrf2 = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf3 = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << "\n---------------  \033[1;31mForm stafrolla\033[0m ---------------" << std::endl;
        rrf4 = someRandomIntern.makeForm("stafrolla", "Bender");

        delete rrf1;
        delete rrf2;
        delete rrf3;
    }
    return 1;
}