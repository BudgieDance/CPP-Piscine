#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    std::srand(std::time(NULL));
    FragTrap trap1("Johny");
    FragTrap trap2(trap1);
    trap2.setName("Tony");

    std::cout << std::endl << "<Checking melee and ranged attacks>" << std::endl; 
    trap1.meleeAttack("target1");
    trap2.rangedAttack("target1");

    std::cout << std::endl << "<Taking damage and being repaired>" << std::endl; 
    trap1.takeDamage(4);
    trap1.takeDamage(90);
    trap1.takeDamage(42);
    trap1.beRepaired(188);

    std::cout << std::endl << "<SPECIAL ATTACK TIME!!!>" << std::endl; 
    trap2.vaulthunter_dot_exe("Target1");
    trap2.vaulthunter_dot_exe("Target1");
    trap2.vaulthunter_dot_exe("Target1");
    trap2.vaulthunter_dot_exe("Target1");
    trap2.vaulthunter_dot_exe("Target1");



    std::cout <<  std::endl  << std::endl << "-------SCAV TRAP TIME!!!-------" << std::endl;
    ScavTrap trap3("Dexter");

    std::cout << std::endl << "<Checking melee and ranged attacks>" << std::endl; 
    trap3.meleeAttack("target1");
    trap3.rangedAttack("target1");

    std::cout << std::endl << "<Taking damage and being repaired>" << std::endl; 
    trap3.takeDamage(2);
    trap3.takeDamage(90);
    trap3.takeDamage(42);
    trap3.beRepaired(188);

    std::cout << std::endl << "<CHALLENGE TIME!!!>" << std::endl; 
    trap3.challengeNewcomer();
    trap3.challengeNewcomer();
    trap3.challengeNewcomer();
    trap3.challengeNewcomer();



    std::cout <<  std::endl  << std::endl << "-------NINJAS ARE HEREEEE!!!-------" << std::endl;
    NinjaTrap trap4("Alexis");
    NinjaTrap trap5(trap4);
    ClapTrap trap6; 
    trap5.setName("Ella");
    

    std::cout << std::endl << "<Checking melee and ranged attacks>" << std::endl; 
    trap4.meleeAttack("target1");
    trap5.rangedAttack("target1");

    std::cout << std::endl << "<Taking damage and being repaired>" << std::endl; 
    trap4.takeDamage(2);
    trap4.takeDamage(90);
    trap4.takeDamage(42);
    trap4.beRepaired(188);

    std::cout << std::endl << "<NINJA SHOEBOX TIME!!!>" << std::endl; 
    trap4.ninjaShoebox(trap1);
    trap4.ninjaShoebox(trap3);
    trap4.ninjaShoebox(trap5);
    trap4.ninjaShoebox(trap6);

    std::cout << std::endl << std::endl << "-------DESTRUCTORS-------" << std::endl;
    return 0;
}