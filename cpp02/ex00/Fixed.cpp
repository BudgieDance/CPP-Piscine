#include "Fixed.hpp"

int const   Fixed::_bits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}