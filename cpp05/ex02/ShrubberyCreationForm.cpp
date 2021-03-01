#include "ShrubberyCreationForm.hpp"

/*CONSTRUCTORS*/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "notarget"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

/*OVERLOADS*/
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
    Form::operator=(src);
    return *this;
}

/*TREE*/
std::string get_tree(){
    return "\
             v\n\
            >X<\n\
             A\n\
            d$b\n\
          .dd$$b.\n\
        .d$i$$d$$b.\n\
           d$$@b\n\
          dd$$$ib\n\
        .d$$$d$$$b\n\
      .d$$@$$$$d$$ib.\n\
          d$$i$$b\n\
         dd$$$$@$b\n\
      .d$@$$d$$$$$@b.\n\
    .d$$$$i$$$d$$$$$$b.\n\
            ###\n\
            ###\n\
            ###\n";
}

/*ACTION*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > this->getGradeToExec())
        throw Form::GradeTooLowToExecException();
    if (!(this->getIsSigned()))
        throw Form::FormNotSignedException();
    std::string fileName = (this->getTarget() + "_" + executor.getName() + "_shrubbery");
    std::ofstream out_file;
    out_file.open(&fileName[0]);
    out_file << get_tree();
    out_file.close();
}