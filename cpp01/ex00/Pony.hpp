#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony{
    private:
        std::string _name;
        std::string _size;

    public:
        Pony(std::string name, std::string size);
        ~Pony();
        void introduction() const;
};

#endif