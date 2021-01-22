#include "Fixed.hpp"

int const   Fixed::_bits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const value){
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_bits;
}

Fixed::Fixed(float const value){
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * ( 1 << this->_bits));
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &src){
    std::cout << "Assignation operator called" << std::endl;
    this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}

float Fixed::toFloat(void) const{
    return (float)this->_value / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const{
    return this->_value >> this->_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src){
    o << src.toFloat();
    return o;
}