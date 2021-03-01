#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();

        class unknownFormException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        Form* makeForm(std::string const name, std::string const target);
        Intern& operator=(Intern const &src);
};

#endif