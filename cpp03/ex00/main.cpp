#include "FragTrap.hpp"

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

    return 0;
}