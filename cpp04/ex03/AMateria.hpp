#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria{

    protected:
        unsigned int _xp;
        std::string _type;
        AMateria();
    
    public:
        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria();

        std::string const & getType() const;
        unsigned int getXP() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria& operator=(AMateria const &src);
};

#endif