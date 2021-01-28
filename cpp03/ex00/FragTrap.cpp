#include "FragTrap.hpp"

/*CONSTRUCTORS*/

FragTrap::FragTrap(void){
    std::cout << "FR4G-TP without a name was just created and is going to do some damage!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_name = "Anonymous";
    this->_melee_dmg = 30;
    this->_ranged_dmg = 20;
    this->_armor = 5;
}

FragTrap::FragTrap(std::string name) : _name(name){
    std::cout << "FR4G-TP named " + this->_name + " was just created and is going to do some damage!!" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_dmg = 30;
    this->_ranged_dmg = 20;
    this->_armor = 5;
}

FragTrap::FragTrap(FragTrap const &src){
    std::cout << "FR4G-TP was just cloned" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void){
    std::cout << "FR4G-TP named " + this->_name + " just exploded. AAAAHHHHH!!" << std::endl;
}

/*OVERLOADS*/

FragTrap &FragTrap::operator=(FragTrap const &src){
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

void FragTrap::rangedAttack(std::string const &target){
    std::cout << this->_name + " attacks " + target + " at range, causing " << this->_ranged_dmg << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target){
    std::cout << this->_name + " attacks " + target + " at melee, causing " << this->_melee_dmg << " points of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
    if (amount < this->_armor)
        amount = 0;
    else
        amount = amount - this->_armor;
    this->_hit_points = this->_hit_points - amount;
    if (this->_hit_points < 0)
    {
        amount = amount + this->_hit_points;
        this->_hit_points = 0;
    }
    std::cout << this->_name << " takes " << amount << " points of damage " << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
    this->_hit_points = this->_hit_points + amount;
    if (this->_hit_points > this->_max_hit_points)
    {
        amount = amount - (this->_hit_points - this->_max_hit_points);
        this->_hit_points = this->_max_hit_points;
    }
    std::cout << this->_name << " is healed for " << amount << " points. YESSSSSS!!!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target){
    std::string attack[5] = {"armaturoy po sheye", "noj v spinu", "pinok pod zad", "s vertuhi po golove", "odin progib i ti pogib"};
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy for a special attack" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << this->_name << " attacks " + target + " with a special attack of type <" << attack[rand() % 5] << ">" << std::endl;
    }
}

/*SETTERS*/

void FragTrap::setName(std::string const &name){
    this->_name = name;
}
