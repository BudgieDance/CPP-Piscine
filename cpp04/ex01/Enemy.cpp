#include "Enemy.hpp"

/*CONSTRUCTORS*/
Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){}

Enemy::Enemy(Enemy const &src){
    *this = src;
}

Enemy::~Enemy(){}

/*GETTERS*/
std::string Enemy::getType() const{
    return this->_type;
}

int Enemy::getHP() const{
    return this->_hp;
}

/*ACTION*/
void Enemy::takeDamage(int damage){
    if (damage > 0)
    {
        if (this->_hp < damage)
            this->_hp = 0;
        else
            this->_hp = this->_hp - damage;        
    }
}

/*OVERLOADS*/
Enemy &Enemy::operator=(Enemy const &src){
    this->_hp = src._hp;
    this->_type = src._type;
    return *this;
}