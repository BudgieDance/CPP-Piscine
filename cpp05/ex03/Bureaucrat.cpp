#include "Bureaucrat.hpp"

/*CONSTRUCTORS*/
Bureaucrat::Bureaucrat(){};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name){
    *this = src;
}

Bureaucrat::~Bureaucrat(){}

/*INCREMENT/DECREMENT*/
void Bureaucrat::incrementGrade(){
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = this->_grade - 1;
}

void Bureaucrat::decrementGrade(){
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = this->_grade + 1;
}

void Bureaucrat::signForm(Form &src){
    if (this->_grade > src.getGradeToSign())
        std::cout << this->_name << " cannot sign " << src.getName() << " because " << this->_name << "'s grade is too low" << std::endl;
    else{
        std::cout << this->_name << " signs " << src.getName() << std::endl;
        src.beSigned(*this);
    }
}

void Bureaucrat::executeForm(Form &src){
    if (!(src.getIsSigned())){
        std::cout << this->_name << " cannot execute " << src.getName() << " because the form is not signed" << std::endl;
        return ;
    }
    if (this->_grade > src.getGradeToExec()){
        std::cout << this->_name << " cannot execute " << src.getName() << " because " << this->_name << "'s grade is too low" << std::endl;
        return ;
    }
    std::cout << this->_name << " executes " << src.getName() << std::endl;
    src.execute(*this);
}

/*EXCEPTIONS*/
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return("The grade is too low");
}

/*GETTERS*/
std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}
/*OVERLOADS*/

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src){
    this->_grade = src._grade;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &src){
    os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return os;
}