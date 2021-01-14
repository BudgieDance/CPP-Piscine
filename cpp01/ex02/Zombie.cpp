#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name){
    std::cout << "Zombie named " + this->_name + " is created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie named " + this->_name + " is destroyed" << std::endl;
}

void    Zombie::announce() const{
    std::cout << "<" + this->_name << " (" + this->_type + ")>" << "Braiiiiiiinnnssss..." << std::endl;
}