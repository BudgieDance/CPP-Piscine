#include "Character.hpp"

/*CONSTRUCTORS*/
Character::Character(){}

Character::Character(std::string name) : _name(name), _inventoryMax(4){
    int index = 0;
    while (index < this->_inventoryMax){
        this->_inventory[index] = NULL;
        index++;
    }
}

Character::Character(Character const &src){
    int index = 0;
    this->_inventoryMax = 4;
    while (index < this->_inventoryMax){
        this->_inventory[index] = NULL;
        index++;
    }
    *this = src;
}

Character::~Character(){
    int index = 0;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] != NULL){
            delete this->_inventory[index];
            this->_inventory[index] = NULL;
        }
        index++;
    }
}

/*GETTERS*/
std::string const & Character::getName() const{
    return this->_name;
}

/*ACTION*/
void Character::equip(AMateria* m){
    int index = 0;
    if (m == NULL)
        return;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] == NULL){
            this->_inventory[index] = m;
            return;
        }
        if (this->_inventory[index] == m)
            return;
        index++;
    }
}

void Character::unequip(int idx){
    if (idx < 0 || idx >= this->_inventoryMax)
        return;
    int index = idx;
    while (index < this->_inventoryMax){
        if (index + 1 < this->_inventoryMax)
            this->_inventory[index] = this->_inventory[index + 1];
        else
            this->_inventory[index] = NULL;
        index++;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx >= this->_inventoryMax)
        return;
    if (this->_inventory[idx] == NULL)
        return;
    this->_inventory[idx]->use(target);
}

/*OVERLOADS*/
Character& Character::operator=(Character const &src){
    int index = 0;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] != NULL){
            delete this->_inventory[index];
            this->_inventory[index] = NULL;
        }
        index++;
    }
    index = 0;
    while (index < this->_inventoryMax){
        if (src._inventory[index] != NULL)
            this->_inventory[index] = src._inventory[index]->clone();
        index++;
    }
    return *this;
}