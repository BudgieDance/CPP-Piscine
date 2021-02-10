#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
    
    private:
        Peon(void);

    public:
        Peon(std::string name);
        Peon(Peon const &src);
        virtual ~Peon(void);

        Peon &operator=(Peon const &src);

        virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Peon const &src);

#endif
