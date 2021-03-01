#include "RobotomyRequestForm.hpp"

/*CONSTRUCTORS*/
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "notarget"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src){}

RobotomyRequestForm::~RobotomyRequestForm(){}

/*OVERLOADS*/
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
    Form::operator=(src);
    return *this;
}

/*ACTION*/
void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > this->getGradeToExec())
        throw Form::GradeTooLowToExecException();
    if (!(this->getIsSigned()))
        throw Form::FormNotSignedException();
    if ((std::rand() % 100) >= 50)
        std::cout << "Success!! " << this->getTarget() << " has been robotomized!" << std::endl;
    else
        std::cout << "Failure! " << this->getTarget() << " wasn't robotomized!" << std::endl; 
}
