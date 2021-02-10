#include "RadScorpion.hpp"

/*CONSTRUCTORS*/
RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src){}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}

/*OVERLOADS*/
RadScorpion &RadScorpion::operator=(RadScorpion const &src){
    Enemy::operator=(src);
    return *this;
}

/*ACTION*/
void RadScorpion::takeDamage(int damage){
    Enemy::takeDamage(damage);
}
