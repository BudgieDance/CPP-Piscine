#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie named " + this->_name + " is destroyed" << std::endl;
}

void    Zombie::announce() const{
    std::cout << "<" + this->_name << " (" + this->_type + ")>" << "Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::settype(std::string type){
    this->_type = type;
}

void    Zombie::setname(){
    std::string random_names[] = {"James", "Lars", "Kirk", "Jason", "Cliff", "Robert"};

    this->_name = random_names[std::rand() % 6];
}