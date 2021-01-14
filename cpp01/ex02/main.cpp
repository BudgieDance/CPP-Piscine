#include "ZombieEvent.hpp"

int main(){

    ZombieEvent event1;
    Zombie      *zombie1;

    std::srand(std::time(nullptr));
    std::cout << std::endl << "Creating a zombie with 'newZombie' method" << std::endl;
    event1.setZombieType("type1");
    zombie1 = event1.newZombie("Johny");
    zombie1->announce();
    delete zombie1;

    std::cout << std::endl << "Creating a zombie with 'randomChump' method" << std::endl;
    event1.setZombieType("type2");
    zombie1 = event1.randomChump();
    delete zombie1;
    return 0;
}