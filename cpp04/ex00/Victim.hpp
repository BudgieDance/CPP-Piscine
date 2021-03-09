#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim{
    
    protected:
        std::string _name;
        Victim(void);

    public:
        Victim(std::string name);
        Victim(Victim const &src);
        virtual ~Victim(void);

        std::string getName(void) const;
        virtual std::string getGreeting(void) const;
        Victim &operator=(Victim const &src);

        virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Victim const &src);

#endif