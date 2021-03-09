#include "Grenade.hpp"

/*CONSTRUCTORS*/
Grenade::Grenade() : AWeapon("Grenade", 5, 42){}

Grenade::Grenade(Grenade const &src) : AWeapon(src){}

Grenade::~Grenade(){}

/*OVERLOADS*/

Grenade &Grenade::operator=(Grenade const &src){
    AWeapon::operator=(src);
    return *this;
}

/*ACTION*/

void Grenade::attack() const{
    std::cout << "* BOOOOOOOM *" << std::endl;
}
