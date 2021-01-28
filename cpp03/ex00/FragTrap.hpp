#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class FragTrap{

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
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);

        FragTrap &operator=(FragTrap const &src);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);

        void setName(std::string const &name);
};

#endif