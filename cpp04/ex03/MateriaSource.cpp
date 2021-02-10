#include "MateriaSource.hpp"

/*CONSTRUCTORS*/
MateriaSource::MateriaSource() : _inventoryMax(4){
    int index = 0;
    while (index < this->_inventoryMax)
    {
        this->_inventory[index] = NULL;
        index++;
    }
}

MateriaSource::MateriaSource(MateriaSource const &src){
    int index = 0;
    while (index < this->_inventoryMax)
    {
        this->_inventory[index] = NULL;
        index++;
    }
    *this = src;
}

MateriaSource::~MateriaSource(){
    int index = 0;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] != NULL){
            delete this->_inventory[index];
            this->_inventory[index] = NULL;
        }
        index++;
    }
}

/*ACTION*/
void MateriaSource::learnMateria(AMateria* m){
    int index = 0;
    if (m == NULL)
        return;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] == NULL){
            this->_inventory[index] = m->clone();
            return;
        }
        index++;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type){
    int index = 0;
    while (index < this->_inventoryMax){
        if (this->_inventory[index] != NULL && this->_inventory[index]->getType() == type){
            AMateria* nmateria = this->_inventory[index]->clone();
            return nmateria;
        }
        index++;
    }
    return NULL;
}

/*OVERLOADS*/
MateriaSource& MateriaSource::operator=(MateriaSource const &src){
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