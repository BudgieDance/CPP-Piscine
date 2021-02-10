#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
    
    public:
        PowerFist();
        PowerFist(PowerFist const &src);
        virtual ~PowerFist();

        virtual void attack() const;

        PowerFist &operator=(PowerFist const &src);
};

#endif
