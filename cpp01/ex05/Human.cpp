#include "Human.hpp"

Human::Human(){
}

Human::~Human(){
}

std::string Human::identify() const{
    std::string addr;

    addr = this->_brain.identify();
    return addr;
}

const Brain &Human::getBrain(){
   return this->_brain; 
}