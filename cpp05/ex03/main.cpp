#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someInter;
    Form* f1;

    try{
        f1 = someInter.makeForm("robotomes request", "Bender");
        std::cout << "SUCCESS" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
}