#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Cat : public Victim{
    
    private:
        Cat(void);

    public:
        Cat(std::string name);
        Cat(Cat const &src);
        virtual ~Cat(void);

        Cat &operator=(Cat const &src);
        virtual std::string getGreeting(void) const;
        virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Cat const &src);

#endif
