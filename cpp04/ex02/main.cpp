#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;




    // std::cout << "-------SQUAD1-------" << std::endl;
    // ISpaceMarine* bob = new TacticalMarine;
    // ISpaceMarine* jim = new AssaultTerminator;
    // ISpaceMarine* bob1 = new TacticalMarine;
    // ISpaceMarine* jim1 = new AssaultTerminator;
    // ISpaceMarine* bob2 = new TacticalMarine;
    // ISpaceMarine* jim2 = new AssaultTerminator;

    // Squad* squad1 = new Squad();
    // squad1->push(bob);
    // squad1->push(jim);
    // squad1->push(NULL);
    // squad1->push(bob1);
    // squad1->push(jim1);
    // squad1->push(bob2);
    // squad1->push(jim2);
    // for (int i = 0; i < squad1->getCount(); ++i)
    // {
    //     ISpaceMarine* cur = squad1->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    // }

    // std::cout << std::endl << "-------SQUAD2-------" << std::endl;
    // ISquad* squad2 = new Squad(*squad1);
    // ISpaceMarine* bob3 = new TacticalMarine;
    // ISpaceMarine* jim3 = new AssaultTerminator;
    // squad2->push(bob3);
    // squad2->push(jim3);
    // for (int i = 0; i < squad2->getCount(); ++i)
    // {
    //     squad2->getUnit(i)->battleCry();
    //     squad2->getUnit(i)->rangedAttack();
    //     squad2->getUnit(i)->meleeAttack();
    // }
    // delete squad2;
    // delete squad1;
    return 0;
}