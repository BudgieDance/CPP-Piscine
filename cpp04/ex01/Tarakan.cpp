#include "Tarakan.hpp"

/*CONSTRUCTORS*/
Tarakan::Tarakan() : Enemy(100, "Tarakan"){
    std::cout << "* clickity click *" << std::endl;
}

Tarakan::Tarakan(Tarakan const &src) : Enemy(src){}

Tarakan::~Tarakan(){
    std::cout << "* OOOOO *" << std::endl;
}

/*OVERLOADS*/
Tarakan &Tarakan::operator=(Tarakan const &src){
    Enemy::operator=(src);
    return *this;
}

/*ACTION*/
void Tarakan::takeDamage(int damage){
    Enemy::takeDamage(damage);
}
