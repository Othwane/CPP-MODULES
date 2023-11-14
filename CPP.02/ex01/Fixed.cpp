#include "Fixed.hpp"

Fixed::Fixed(/* args */){
    this->raw_ = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed){
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(fixed);
}

Fixed::Fixed(const int n){
    std::cout << "Int constructror called" << std::endl;
    this->raw_ = n << bits_;
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor called " << std::endl;
    this->raw_ = roundf(f * (1 << bits_));
}

std::ostream& operator << (std::ostream& x, const Fixed& fixed){
    x << fixed.toFloat();
    return x;
}

Fixed& Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw_ = fixed.getRawBits();
    return *this;
}

float   Fixed::toFloat( void ) const{
    return (raw_ / (float)(1 << bits_));
}

int Fixed::toInt( void ) const{
    return (raw_ >> bits_);
}

int Fixed::getRawBits() const{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->raw_;
}

void    Fixed::setRawBits(int const raw){
    this->raw_ = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
