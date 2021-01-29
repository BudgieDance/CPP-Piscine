#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap{

    public:
        SuperTrap(void);
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const &src);
        ~SuperTrap(void);

        SuperTrap &operator=(SuperTrap const &src);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
};

#endif
