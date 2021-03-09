#include "Cat.hpp"

/*Constructors*/

Cat::Cat(void){}

Cat::Cat(std::string name) : Victim(name){
    std::cout << "Meow." << std::endl;
}

Cat::Cat(Cat const &src) : Victim(src){
    std::cout << "Cat named " + this->_name + " is cloned" << std::endl;
}

Cat::~Cat(void){
    std::cout << "MEEEOOOOOW..." << std::endl;
}

/*Overloads*/

Cat &Cat::operator=(Cat const &src){
    this->_name = src._name;
    return *this;
}

std::string Cat::getGreeting(void) const{
    std::string greet = "I am " + this->_name + " and I like to meooow!";
    return greet;
}

std::ostream &operator<<(std::ostream &os, Cat const &src){
    os << src.getGreeting() << std::endl;
    return os;
}

/*Polymorph*/

void Cat::getPolymorphed(void) const{
    std::cout << this->_name + " has been turned into a doggy dog!" << std::endl;
}
