#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;


    // IMateriaSource* src = new MateriaSource();
    // Character* john = new Character("john");
    // AMateria* tmp = NULL;
    // john->equip(tmp);
    // john->equip(tmp);
    // tmp = src->createMateria("ice");
    // src->learnMateria(new Cure());
    // tmp = src->createMateria("ice");
    // john->equip(tmp);
    // tmp = src->createMateria("cure");
    // john->equip(tmp);
    // Character* bob = new Character("bob");
    // *bob = *john;
    // john->use(0, *bob);
    // bob->use(0, *john);
    // delete bob;
    // delete john;
    // delete src;

    return 0;
}