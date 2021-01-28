#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap{

    private:
        int _hit_points;
        int _max_hit_points;
        int _energy_points;
        int _max_energy_points;
        unsigned int _level;
        std::string _name;
        unsigned int _melee_dmg;
        unsigned int _ranged_dmg;
        unsigned int _armor;

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &src);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(void);

        void setName(std::string const &name);
};

#endif