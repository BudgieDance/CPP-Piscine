#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Cat.hpp"
int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);



    /*Sorcerer robert("Robert", "the Magnificent");
    Cat cat("Cutie");
    Cat *cat1 = new Cat("Kittie");
    //Victim *cat1 = new Cat("Kittie");

    robert.polymorph(cat);
    robert.polymorph(*cat1);
    std::cout << std::endl << std::endl << "DESTRUCTORS" << std::endl;
    delete cat1;*/


    return 0;
}