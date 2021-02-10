#include "AMateria.hpp"

/*CONSTRUCTORS*/
AMateria::AMateria() : _xp(0), _type("NOTYPE"){}

AMateria::AMateria(std::string const &type) : _xp(0), _type(type){}

AMateria::AMateria(AMateria const &src){
    this->_type = src._type;
    *this = src;
}

AMateria::~AMateria(){}

/*GETTERS*/
std::string const &AMateria::getType() const{
    return this->_type;
}

unsigned int AMateria::getXP() const{
    return this->_xp;
}

/*ACTION*/
void AMateria::use(ICharacter& target){
    (void)target;
    this->_xp = this->_xp + 10;
}

/*OVERLOADS*/
AMateria& AMateria::operator=(AMateria const &src){
    this->_xp = src._xp;
    return *this;
}
