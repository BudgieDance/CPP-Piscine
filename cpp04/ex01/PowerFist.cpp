#include "PowerFist.hpp"

/*CONSTRUCTORS*/
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src){}

PowerFist::~PowerFist(){}

/*OVERLOADS*/

PowerFist &PowerFist::operator=(PowerFist const &src){
    AWeapon::operator=(src);
    return *this;
}

/*ACTION*/

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
