#include "SuperMutant.hpp"

/*CONSTRUCTORS*/
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src){}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

/*OVERLOADS*/
SuperMutant &SuperMutant::operator=(SuperMutant const &src){
    Enemy::operator=(src);
    return *this;
}

/*ACTION*/
void SuperMutant::takeDamage(int damage){
    Enemy::takeDamage(damage - 3);
}