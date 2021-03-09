#ifndef TARAKAN_HPP
# define TARAKAN_HPP

#include "Enemy.hpp"

class Tarakan : public Enemy{

    public:
        Tarakan();
        Tarakan(Tarakan const &src);
        virtual ~Tarakan();

        virtual void takeDamage(int damage);

        Tarakan &operator=(Tarakan const &src);
};

#endif
