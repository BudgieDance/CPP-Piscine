#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer{
    
    private:
        std::string _name;
        std::string _title;
        Sorcerer(void);

    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &src);
        ~Sorcerer(void);

        std::string getName(void) const;
        std::string getTitle(void) const;
        Sorcerer &operator=(Sorcerer const &src);

        void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &src);

#endif