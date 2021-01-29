#include "NinjaTrap.hpp"

/*CONSTRUCTORS*/

NinjaTrap::NinjaTrap(void){
    std::cout << "NINJA-TP without a name was just created and is going to show you its ninja moves!!" << std::endl;
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_name = "Anonymous";
    this->_melee_dmg = 60;
    this->_ranged_dmg = 5;
    this->_armor = 0;
}

NinjaTrap::NinjaTrap(std::string name){
    this->_name = name;
    std::cout << "NINJA-TP named " + this->_name + " was just created and is going to show you its ninja moves!!" << std::endl;
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_dmg = 60;
    this->_ranged_dmg = 5;
    this->_armor = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src){
    std::cout << "NINJA-TP was just cloned" << std::endl;
    *this = src;
}

NinjaTrap::~NinjaTrap(void){
    std::cout << "NINJA-TP named " + this->_name + " just exploded. AAAAHHHHH!!" << std::endl;
}

/*OVERLOADS*/

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &src){
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

void NinjaTrap::rangedAttack(std::string const &target){
    std::cout << "NINJ4-TP " + this->_name + " attacks " + target + " at range, causing " << this->_ranged_dmg << " points of damage" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target){
    std::cout << "NINJ4-TP " + this->_name + " attacks " + target + " at melee, causing " << this->_melee_dmg << " points of damage" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &trap){
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << "Oh, hello there, " << trap.getName() << " ClapTrap. CLAP CLAP CLAP!!!" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(FragTrap const &trap){
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << "Oh, hello there, " << trap.getName() << " FragTrap. FRAG FRAG FRAG!!!" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(ScavTrap const &trap){
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << "Oh, hello there, " << trap.getName() << " ScavTrap. SCAV SCAV SCAV!!!" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &trap){
    if (this->_energy_points < 25)
        std::cout << "OH SHIT!! " << this->_name << " doesn't have enough energy" << std::endl;
    else
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << "Oh, hello there, " << trap.getName() << " NinjaTrap. You're just like me! NINJAAAAA!!" << std::endl;
    }
}