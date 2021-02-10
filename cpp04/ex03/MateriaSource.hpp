#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

    private:
        int _inventoryMax;
        AMateria* _inventory[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const &type);

        MateriaSource& operator=(MateriaSource const &src);


};

#endif