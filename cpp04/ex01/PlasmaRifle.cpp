#include "PlasmaRifle.hpp"

/*CONSTRUCTORS*/
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src){}

PlasmaRifle::~PlasmaRifle(){}

/*OVERLOADS*/

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src){
    AWeapon::operator=(src);
    return *this;
}

/*ACTION*/

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}