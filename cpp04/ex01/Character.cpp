#include "Character.hpp"

/*CONSTRUCTORS*/
Character::Character(){}

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(NULL){}

Character::Character(Character const &src){
    *this = src;
}

Character::~Character(){}

/*GETTERS*/
std::string Character::getName() const{
    return this->_name;
}

AWeapon *Character::getWeapon() const{
    return this->_weapon;
}

int Character::getAP() const{
    return this->_AP;
}

/*ACTION*/
void Character::recoverAP(){
    this->_AP = this->_AP + 10;
    if (this->_AP > 40)
        this->_AP = 40;
}

void Character::equip(AWeapon *weapon){
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy){
    if (enemy == NULL)
        return;
    if (this->_weapon == NULL)
        return;
    if (this->_AP >= _weapon->getAPCost())
    {
        std::cout << this->_name + " attacks " + enemy->getType() + " with a " + _weapon->getName() << std::endl;
        this->_AP = this->_AP - _weapon->getAPCost();
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() == 0)
            delete enemy;
    }
}

/*OVERLOADS*/
Character &Character::operator=(Character const &src){
    this->_name = src._name;
    this->_AP = src._AP;
    this->_weapon = src._weapon;
    return *this;
}

std::ostream &operator<<(std::ostream &os, Character const &src){
    if (src.getWeapon() == NULL)
        os << src.getName() + " has " << src.getAP() << " AP and is unarmed" << std::endl;
    else
        os << src.getName() + " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
    return os;
}