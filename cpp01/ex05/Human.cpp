#include "Human.hpp"

Human::Human(void){}

Human::~Human(void){}

std::string Human::identify() const{
    std::string addr;

    addr = this->_brain.identify();
    return addr;
}

Brain const &Human::getBrain() const{
   return this->_brain; 
}