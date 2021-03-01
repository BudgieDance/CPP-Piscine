#include "Ice.hpp"

/*CONSTRUCTORS*/
Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const &src) : AMateria(src){}

Ice::~Ice(){}

/*ACTION*/
AMateria* Ice::clone() const{
    Ice* temp = new Ice(*this);
    return temp;
}

void Ice::use(ICharacter& target){
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*OVERLOADS*/
Ice& Ice::operator=(Ice const &src){
    AMateria::operator=(src);
    return *this;
}