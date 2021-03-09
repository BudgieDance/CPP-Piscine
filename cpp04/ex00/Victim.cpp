#include "Victim.hpp"

/*Constructors*/

Victim::Victim(void){}

Victim::Victim(std::string name) : _name(name){
    std::cout << "Some random victim called " + this->_name + " just appeared!" << std::endl;
}

Victim::Victim(Victim const &src){
    *this = src;
    std::cout << "Victim named " + this->_name + " is cloned" << std::endl;
}

Victim::~Victim(void){
    std::cout << "Victim " + this->_name + " just died for no apparent reason" << std::endl;
}

/*Getters*/

std::string Victim::getName(void) const{
    return this->_name;
}

std::string Victim::getGreeting(void) const{
    std::string greet = "I am " + this->_name + " and I like otters!";
    return greet;
}

/*Overloads*/

Victim &Victim::operator=(Victim const &src){
    this->_name = src._name;
    return *this;
}

std::ostream &operator<<(std::ostream &os, Victim const &src){
    os << src.getGreeting() << std::endl;
    return os;
}

/*Polymorph*/

void Victim::getPolymorphed(void) const{
    std::cout << this->_name + " has been turned into a cute little sheep!" << std::endl;
}