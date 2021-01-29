#include "SuperTrap.hpp"

/*CONSTRUCTORS*/

SuperTrap::SuperTrap(void){
    std::cout << "SUPER-TP without a name was just created!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_name = "Anonymous";
    this->_melee_dmg = 60;
    this->_ranged_dmg = 20;
    this->_armor = 5;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(), NinjaTrap(name), FragTrap(name){
    this->_name = name;
    std::cout << "SUPER-TP named " + this->_name + " was just created!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_dmg = 60;
    this->_ranged_dmg = 20;
    this->_armor = 5;
}

SuperTrap::SuperTrap(SuperTrap const &src){
    std::cout << "SUPER-TP was just cloned" << std::endl;
    *this = src;
}

SuperTrap::~SuperTrap(void){
    std::cout << "SUPER-TP named " + this->_name + " just exploded. BYE BYE!!" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target){
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target){
    NinjaTrap::meleeAttack(target);
}

/*OVERLOADS*/

SuperTrap &SuperTrap::operator=(SuperTrap const &src){
    this->_hit_points = src._hit_points;
    this->_max_hit_points = src._max_hit_points;
    this->_energy_points = src._energy_points;
    this->_max_energy_points = src._max_energy_points;
    this->_level = src._level;
    this->_name = src._name;
    this->_melee_dmg = src._melee_dmg;
    this->_ranged_dmg = src._ranged_dmg;
    this->_armor = src._armor;
    return *this;
}