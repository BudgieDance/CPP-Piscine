#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad{

    private:
        int _count;
        ISpaceMarine **_units;

    public:
        Squad();
        Squad(Squad const &src);
        virtual ~Squad();

        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int index) const;
        virtual int push(ISpaceMarine* newUnit);

        Squad &operator=(Squad const &src);
};

#endif