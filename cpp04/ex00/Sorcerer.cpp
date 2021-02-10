#include "Sorcerer.hpp"

/*Constructors*/

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
    std::cout << this->_name + ", " + this->_title + ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src){
    *this = src;
    std::cout << this->_name + ", " + this->_title + ", is cloned!" << std::endl;
}

Sorcerer::~Sorcerer(void){
    std::cout << this->_name + ", " + this->_title + ", is dead. Consequences will never be the same!" << std::endl;
}

/*Getters*/

std::string Sorcerer::getName(void) const{
    return this->_name;
}

std::string Sorcerer::getTitle(void) const{
    return this->_title;
}

/*Polymorph*/

void Sorcerer::polymorph(Victim const &victim) const{
    victim.getPolymorphed();
}

/*Overloads*/

Sorcerer &Sorcerer::operator=(Sorcerer const &src){
    this->_name = src._name;
    this->_title = src._title;
    return *this;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &src){
    os << "I am " + src.getName() + ", " + src.getTitle() + ", and I like Ponies!" << std::endl;
    return os;
}