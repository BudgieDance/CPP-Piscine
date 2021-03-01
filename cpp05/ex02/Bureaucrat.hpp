#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat{

    private:
        std::string const _name;
        int _grade;
        Bureaucrat();
    
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(); 

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &src);
        void executeForm(Form &src);

        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        Bureaucrat& operator=(Bureaucrat const &src);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &src);

#endif