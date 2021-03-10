#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someInter;
    Form* f1;

    f1 = someInter.makeForm("robotomes request", "Bender");
    f1 = someInter.makeForm("robotomy request", "Bender");
    std::cout << *f1 << std::endl;
}