#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::srand(std::time(NULL));
    Bureaucrat b1("Trump", 1);
    Bureaucrat b2("Putin", 150);
    ShrubberyCreationForm f1("target1");
    ShrubberyCreationForm f2("target2");

    b1.signForm(f1);
    b1.executeForm(f1);
    b1.executeForm(f2);
    b2.executeForm(f1);
    //FORCE EXECUTE
    try{
        f2.execute(b1);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    //FORCE EXECUTE LOW GRADE
    try{
        f1.execute(b2);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }


    std::cout << std::endl;
    RobotomyRequestForm f3("target1");
    RobotomyRequestForm f4("target2");
    b1.signForm(f3);
    b1.executeForm(f3);
    b1.executeForm(f4);
    b2.executeForm(f3);
    //FORCE EXECUTE
    try{
        f4.execute(b1);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    //FORCE EXECUTE LOW GRADE
    try{
        f3.execute(b2);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    std::cout << std::endl;

    PresidentialPardonForm f5("target1");
    PresidentialPardonForm f6("target2");
    b1.signForm(f5);
    b1.executeForm(f5);
    b1.executeForm(f6);
    b2.executeForm(f5);
    //FORCE EXECUTE
    try{
        f6.execute(b1);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    //FORCE EXECUTE LOW GRADE
    try{
        f5.execute(b2);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    return 0; 
}