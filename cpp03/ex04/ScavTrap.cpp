#include "ScavTrap.hpp"

/*CONSTRUCTORS*/

ScavTrap::ScavTrap(void){
    std::cout << "SC4V-TP without a name was just created and is going to challenge your ass!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_name = "Anonymous";
    this->_melee_dmg = 20;
    this->_ranged_dmg = 15;
    this->_armor = 3;
}

ScavTrap::ScavTrap(std::string name){
    this->_name = name;
    std::cout << "SC4V-TP named " + this->_name + " was just created and is going to challenge your ass!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_melee_dmg = 20;
    this->_ranged_dmg = 15;
    this->_armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const &src){
    std::cout << "SC4V-TP was just cloned" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(void){
    std::cout << "SC4V-TP named " + this->_name + " just exploded. NO MORE CHALLENGES NOOOOO!!" << std::endl;
}

/*OVERLOADS*/

ScavTrap &ScavTrap::operator=(ScavTrap const &src){
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

/*ACTION FUNCTIONS*/

void ScavTrap::rangedAttack(std::string const &target){
    std::cout << "SC4V-TP " + this->_name + " attacks " + target + " at range, causing " << this->_ranged_dmg << " points of damage" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target){
    std::cout << "SC4V-TP " + this->_name + " attacks " + target + " at melee, causing " << this->_melee_dmg << " points of damage" << std::endl;
}

void ScavTrap::challengeNewcomer(void){
    std::string challenge[5] = {"do a backflip", "bang your head against a wall", "take 10 shots of vodka", "make a burrito", "jump out the window"};
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy to challenge you" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << this->_name << " challenges you to " << challenge[rand() % 5] << std::endl;
    }
}