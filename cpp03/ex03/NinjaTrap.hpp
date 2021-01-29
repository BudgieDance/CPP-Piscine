#ifndef NINJA_HPP
# define NINJA_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{

    public:
        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const &src);
        ~NinjaTrap(void);

        NinjaTrap &operator=(NinjaTrap const &src);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void ninjaShoebox(ClapTrap const &trap);
        void ninjaShoebox(FragTrap const &trap);
        void ninjaShoebox(ScavTrap const &trap);
        void ninjaShoebox(NinjaTrap const &trap);
};

#endif