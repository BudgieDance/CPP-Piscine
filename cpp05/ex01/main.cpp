#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b1("Trump", 1);
    Bureaucrat b2("Putin", 150);
    Form f1("treaty", 42, 60); 
    Form f2("treaty2", 42, 60); 


    std::cout << "BUREAUCRATS TRYING TO SIGN" << std::endl;
    std::cout << f1 << std::endl;
    b1.signForm(f1); //TRUMP
    std::cout << f1 << std::endl;

    std::cout << std::endl;

    std::cout << f2 << std::endl;
    b2.signForm(f2); //PUTIN
    std::cout << f2 << std::endl;

    std::cout << std::endl << "FORCE PUTIN TO SIGN" << std::endl;
    try{
        std::cout << f2 << std::endl;
        f2.beSigned(b2);
        std::cout << f2 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    return 0;
}