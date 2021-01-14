#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type){
    this->_type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name){
    Zombie *zombie_ptr;

    zombie_ptr = new Zombie(this->_type, name);
    return zombie_ptr;
}

Zombie  *ZombieEvent::randomChump(){
    Zombie *zombie_ptr;
    std::string random_names[] = {"James", "Lars", "Kirk", "Jason", "Cliff", "Robert"};

    zombie_ptr = new Zombie(this->_type, random_names[std::rand() % 6]);
    zombie_ptr->announce();
    return zombie_ptr;
}
