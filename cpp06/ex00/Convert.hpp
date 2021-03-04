#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

class Convert{

    private:
        int _type;
        bool _impossible;
        bool _range;
        std::string _arg;

        char _char;
        int _int;
        float _float;
        double _double;
        Convert();

    public:
        Convert(std::string _arg);
        Convert(Convert const &src);
        ~Convert();

        void fromChar();
        void fromInt();
        void fromFloat();
        void fromDouble();
        void convert_all();
        void convert_all2();

        void setType();
        int getType() const;
        bool getImpossible() const;
        bool getRange() const;
        char getChar() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const;


        enum Types{
            charType,
            intType,
            floatType,
            doubleType,
            unknownType
        };

        Convert& operator=(Convert const &src);
};

std::ostream& operator<<(std::ostream& os, Convert const &src);
#endif