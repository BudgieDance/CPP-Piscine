#include "Bureaucrat.hpp"

int main()
{
    //HIGHEST GRADE
    std::cout << "HIGHEST GRADE" << std::endl;
    try{
        Bureaucrat b1("Donald", 1);
        std::cout << b1 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //DECREMENT
    std::cout << std::endl << "DECREMENT" << std::endl;
    try{
        Bureaucrat b1("Donald", 1);
        std::cout << b1 << std::endl;
        b1.decrementGrade();
        std::cout << b1 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //LOWEST GRADE
    std::cout << std::endl << "LOWEST GRADE" << std::endl;
    try{
        Bureaucrat b2("Donald2", 150);
        std::cout << b2 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //INCREMENT
    std::cout << std::endl << "INCREMENT" << std::endl;
    try{
        Bureaucrat b2("Donald", 150);
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //GRADE TOO HIGH
    std::cout << std::endl << "GRADE TOO HIGH" << std::endl;
    try{
        Bureaucrat b3("Donald3", -1);
        std::cout << b3 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //GRADE TOO LOW 
    std::cout << std::endl << "GRADE TOO LOW" << std::endl;
    try{
        Bureaucrat b4("Donald4", 151);
        std::cout << b4 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //DECREMENT ERROR
    std::cout << std::endl << "DECREMENT ERROR" << std::endl;
    try{
        Bureaucrat b1("Donald", 150);
        std::cout << b1 << std::endl;
        b1.decrementGrade();
        std::cout << b1 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    //INCREMENT ERROR
    std::cout << std::endl << "INCREMENT ERROR" << std::endl;
    try{
        Bureaucrat b1("Donald", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
}