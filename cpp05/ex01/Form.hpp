#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Form;
#include "Bureaucrat.hpp"

class Form{

    private:
        std::string const _name;
        int const _gradeToSign;
        int const _gradeToExec;
        bool _isSigned;
        Form();

    public:
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form const &src);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat const &src);

        class GradeTooHighExeception : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowExeception : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        Form& operator=(Form const &src);
};

std::ostream& operator<<(std::ostream& os, Form const &src);

#endif