#include "Peon.hpp"

/*Constructors*/

Peon::Peon(void){}

Peon::Peon(std::string name) : Victim(name){
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src){
    std::cout << "Peon named " + this->_name + " is cloned" << std::endl;
}

Peon::~Peon(void){
    std::cout << "Bleuark..." << std::endl;
}

/*Overloads*/

Peon &Peon::operator=(Peon const &src){
    this->_name = src._name;
    return *this;
}

std::ostream &operator<<(std::ostream &os, Peon const &src){
    os << "I am " + src.getName() + " and I like otters!" << std::endl;
    return os;
}

/*Polymorph*/

void Peon::getPolymorphed(void) const{
    std::cout << this->_name + " has been turned into a pink pony!" << std::endl;
}
