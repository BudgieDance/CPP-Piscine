#ifndef GRENADE_HPP
# define GRENADE_HPP

#include "AWeapon.hpp"

class Grenade : public AWeapon{
    
    public:
        Grenade();
        Grenade(Grenade const &src);
        virtual ~Grenade();

        virtual void attack() const;

        Grenade &operator=(Grenade const &src);
};

#endif
