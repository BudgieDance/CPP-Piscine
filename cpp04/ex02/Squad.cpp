#include "Squad.hpp"

/*CONSTRUCTORS*/
Squad::Squad() : _count(0), _units(NULL){}

Squad::Squad(Squad const &src){
    this->_units = NULL;
    *this = src;
}

Squad::~Squad(){
    int index = 0;
    if (this->_units != NULL)
    {
        while(index < this->_count)
        {
            delete this->_units[index];
            index++;
        }
        delete [] this->_units;
    }
}

/*GETTERS/SETTERS*/
int Squad::getCount() const{
    return this->_count;
}

ISpaceMarine* Squad::getUnit(int index) const{
    if (index < 0)
        return NULL;
    if (index >= this->_count)
        return NULL;
    return this->_units[index];
}

int Squad::push(ISpaceMarine *newUnit){
    if (newUnit == NULL)
        return this->_count;
    int index = 0;
    if (this->_units != NULL){
        while (index < this->_count)
        {
            if (newUnit == this->_units[index])
                return this->_count;
            index++;
        }
        ISpaceMarine** tempSquad = new ISpaceMarine*[this->_count + 1];
        index = 0;
        while (index < this->_count)
        {
            tempSquad[index] = this->_units[index];
            index++;
        }
        delete [] this->_units;
        tempSquad[index] = newUnit;
        this->_units = tempSquad;
        this->_count = this->_count + 1;
    }
    else{
        this->_units = new ISpaceMarine*[1];
        this->_units[0] = newUnit;
        this->_count = 1;
    }
    return this->_count;
}

/*OVERLOADS*/
Squad &Squad::operator=(Squad const &src){
    int index = 0;
    if (this->_units != NULL)
    {
        while(index < this->_count)
        {
            delete this->_units[index];
            index++;
        }
        delete [] this->_units;
        this->_units = NULL;
    }
    this->_count = src._count;
    index = 0;
    if (this->_count > 0){
        this->_units = new ISpaceMarine*[this->_count];
        while (index < this->_count){
            this->_units[index] = src.getUnit(index)->clone();
            index++;
        }
    }
    return *this;
}
