#include "Fixed.hpp"

Fixed::Fixed(/* args */){
    this->raw_ = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed){
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(fixed);
}

Fixed& Fixed::operator=(Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw_ = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(){
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw_;
}

void    Fixed::setRawBits(int const raw){
    this->raw_ = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}