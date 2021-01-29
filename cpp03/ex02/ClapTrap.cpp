#include "ClapTrap.hpp"

/*CONSTRUCTORS*/

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_hit_points = 0;
    this->_max_hit_points = 0;
    this->_energy_points = 0;
    this->_max_energy_points = 0;
    this->_level = 0;
    this->_name = "Empty";
    this->_melee_dmg = 0;
    this->_ranged_dmg = 0;
    this->_armor = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap destructor called" << std::endl;
}

/*OVERLOADS*/

ClapTrap &ClapTrap::operator=(ClapTrap const &src){
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

void ClapTrap::rangedAttack(std::string const &target){
    std::cout << "CL4P-TP " + this->_name + " attacks " + target + " at range, causing " << this->_ranged_dmg << " points of damage" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target){
    std::cout << "CL4P-TP " + this->_name + " attacks " + target + " at melee, causing " << this->_melee_dmg << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
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

void ClapTrap::beRepaired(unsigned int amount){
    this->_hit_points = this->_hit_points + amount;
    if (this->_hit_points > this->_max_hit_points)
    {
        amount = amount - (this->_hit_points - this->_max_hit_points);
        this->_hit_points = this->_max_hit_points;
    }
    std::cout << this->_name << " is healed for " << amount << " points. YESSSSSS!!!" << std::endl;
}

/*SETTERS*/

void ClapTrap::setName(std::string const &name){
    this->_name = name;
}
