#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

    private:
        int _value;
        static int const _bits;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &src);

        Fixed &operator=(Fixed const &src);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif