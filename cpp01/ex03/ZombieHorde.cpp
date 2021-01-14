#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde (int n){
    int index = 0;

    this->zombies = new Zombie[n];
    while (index < n)
    {
        this->zombies[index].settype("type1");
        this->zombies[index].setname();
        this->zombies[index].announce();
        index++;
    }
}

ZombieHorde::~ZombieHorde(){
    std::cout << std::endl;
    delete [] this->zombies;
    std::cout << std::endl << "All zombies are dead now" << std::endl;
}