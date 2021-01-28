#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class ClapTrap{

    protected:
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
        ClapTrap(void);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);

        ClapTrap &operator=(ClapTrap const &src);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(std::string const &name);
};

#endif