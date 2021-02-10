#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{

    private:
        std::string _name;
        int _AP;
        AWeapon *_weapon;
        Character();

    public:
        Character(std::string const &name);
        Character(Character const &src);
        ~Character();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);
        std::string getName() const;
        AWeapon *getWeapon() const;
        int getAP() const;

        Character &operator=(Character const &src);
};

std::ostream &operator<<(std::ostream &os, Character const &src);

#endif