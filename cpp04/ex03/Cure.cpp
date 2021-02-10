#include "Cure.hpp"

/*CONSTRUCTORS*/
Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const &src) : AMateria(src){}

Cure::~Cure(){}

/*ACTION*/
AMateria* Cure::clone() const{
    Cure* temp = new Cure(*this);
    return temp;
}

void Cure::use(ICharacter& target){
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*OVERLOADS*/
Cure& Cure::operator=(AMateria const &src){
    this->_xp = src.getXP();
    return *this;
}
