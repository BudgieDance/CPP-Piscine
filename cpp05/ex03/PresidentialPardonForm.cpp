#include "PresidentialPardonForm.hpp"

/*CONSTRUCTORS*/
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "notarget"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src){}

PresidentialPardonForm::~PresidentialPardonForm(){}

/*OVERLOADS*/
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
    Form::operator=(src);
    return *this;
}

/*ACTION*/
void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > this->getGradeToExec())
        throw Form::GradeTooLowToExecException();
    if (!(this->getIsSigned()))
        throw Form::FormNotSignedException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
