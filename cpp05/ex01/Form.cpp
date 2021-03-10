#include "Form.hpp"

/*CONSTRUCTORS*/
Form::Form() : _name("noname"), _gradeToSign(1), _gradeToExec(1), _isSigned(false){}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false){
    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighExeception();
    if (gradeToSign > 150 || gradeToExec > 150) 
        throw Form::GradeTooLowExeception();
}

Form::Form(Form const &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec){
    *this = src;
}

Form::~Form(){}

/*GETTERS*/
std::string Form::getName() const{
    return this->_name;
}

int Form::getGradeToSign() const{
    return this->_gradeToSign;
}

int Form::getGradeToExec() const{
    return this->_gradeToExec;
}

bool Form::getIsSigned() const{
    return this->_isSigned;
}

/*ACTION*/
void Form::beSigned(Bureaucrat const &src){
    if (src.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowExeception();
    this->_isSigned = true;
}

/*EXCEPTIONS*/
const char* Form::GradeTooHighExeception::what() const throw(){
    return "The grade is too high";
}

const char* Form::GradeTooLowExeception::what() const throw(){
    return "The grade is to low";
}

/*OVERLOADS*/
Form& Form::operator=(Form const &src){
    this->_isSigned = src._isSigned;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Form const &src){
    if (src.getIsSigned()){
        os << "Form '" << src.getName() << "' is signed" << std::endl <<
        "grade required to sign = " << src.getGradeToSign() << std::endl <<
        "grade required to execute = " << src.getGradeToExec();
    }
    else{
        os << "Form '" << src.getName() << "' is NOT signed" << std::endl <<
        "grade required to sign = " << src.getGradeToSign() << std::endl <<
        "grade required to execute = " << src.getGradeToExec();
    }
    return os;
}