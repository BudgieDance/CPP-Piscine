#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;

    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    // Character *me = new Character("me");
    // std::cout << *me;

    // Enemy* b = new RadScorpion();
    // Enemy* c = new SuperMutant();
    // AWeapon* pr = new PlasmaRifle();
    // AWeapon* pf = new PowerFist();


    // std::cout << "-------EMPTY ATTACKS-------" << std::endl;  
    // me->attack(b);
    // std::cout << *me;
    // me->attack(NULL);
    // std::cout << "-------ATTACKS-------" << std::endl;  
    // me->equip(pr);
    // std::cout << *me << std::endl;
    // me->attack(b);
    // std::cout << *me << std::endl;
    // me->attack(b);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->equip(pf);
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;
    // me->attack(c);
    // std::cout << *me << std::endl;

    // std::cout << "-------RECOVER-------" << std::endl;  
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;
    // me->recoverAP();
    // std::cout << *me << std::endl;

    // delete(pf);
    // delete(pr);
    // delete(b);
    // delete(c);
    // delete(me);
    return 0;
}