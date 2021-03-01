#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::srand(std::time(NULL));
    Bureaucrat b1("Trump", 1);
    //Bureaucrat b2("Putin", 150);
    ShrubberyCreationForm f1("target1");
    ShrubberyCreationForm f2("target2");

    b1.signForm(f1);
    try{
        b1.executeForm(f1);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    try{
        b1.executeForm(f2);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }


    std::cout << std::endl;
    RobotomyRequestForm f3("target1");
    RobotomyRequestForm f4("target2");
    b1.signForm(f3);
    try{
        b1.executeForm(f3);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    try{
        b1.executeForm(f4);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    std::cout << std::endl;
    PresidentialPardonForm f5("target1");
    PresidentialPardonForm f6("target2");
    b1.signForm(f5);
    try{
        b1.executeForm(f5);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    try{
        b1.executeForm(f6);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    return 0; 
}