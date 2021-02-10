#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
    
    private:
        std::string const _name;
        int _inventoryMax;
        AMateria* _inventory[4];
        Character();
    
    public:
        Character(std::string name);
        Character(Character const &src);
        virtual ~Character();

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

        Character& operator=(Character const &src);
};

#endif