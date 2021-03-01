#include "Intern.hpp"

/*CONSTRUCTORS*/
Intern::Intern(){}

Intern::Intern(Intern const &src){
    (void)src;
}

Intern::~Intern(){}

/*EXCEPTIONS*/
const char* Intern::unknownFormException::what() const throw(){
    return ("Form name was not recognized");
}

/*ACTION*/
Form* makeShrubberyForm(std::string const target){
    Form* temp = new ShrubberyCreationForm(target);
    return temp;
}

Form* makeRobotomyForm(std::string const target){
    Form* temp = new RobotomyRequestForm(target);
    return temp;
}

Form* makePresidentialForm(std::string const target){
    Form* temp = new PresidentialPardonForm(target);
    return temp;
}

Form* Intern::makeForm(std::string const name, std::string const target){
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form*(*forms[3])(std::string const);

    forms[0] = makeShrubberyForm;
    forms[1] = makeRobotomyForm;
    forms[2] = makePresidentialForm;
    int i = 0;
    while (i < 3){
        if (names[i] == name)
            return (forms[i](target));
        i++;
    }
    throw Intern::unknownFormException();
}

/*OVERLOADS*/
Intern& Intern::operator=(Intern const &src){
    (void)src;
    return *this;
}