#include "Fixed.hpp"

Fixed::Fixed(/* args */){
    this->raw_ = 0;
}

Fixed::Fixed( const Fixed& fixed ){
    this->operator=(fixed);
}

Fixed::Fixed( const int n ){
    this->raw_ = n << bits_;
}

Fixed::Fixed( const float f ){
    this->raw_ = roundf(f * (1 << bits_));
}

std::ostream& operator << ( std::ostream& x, const Fixed& fixed ){
    x << fixed.toFloat();
    return x;
}

Fixed& Fixed::operator=( const Fixed& fixed ){
    this->raw_ = fixed.getRawBits();
    return *this;
}

bool	Fixed::operator<( Fixed const &fixed ) const{
	return getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator<=( Fixed const &fixed ) const{
	return getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator>( Fixed const &fixed ) const{
	return getRawBits() > fixed.getRawBits();
}

bool	Fixed::operator>=( Fixed const &fixed ) const{
	return getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator==( Fixed const &fixed ) const{
	return getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=( Fixed const &fixed ) const{
	return getRawBits() != fixed.getRawBits();
}

Fixed	Fixed::operator+( Fixed const &fixed ) const{
	Fixed	ret;
	ret.setRawBits(getRawBits() + fixed.getRawBits());
	return ret;
}

Fixed	Fixed::operator-( Fixed const &fixed ) const{
	Fixed	ret;
	ret.setRawBits(getRawBits() - fixed.getRawBits());
	return ret;
}

Fixed	Fixed::operator*( Fixed const &fixed ) const{
	Fixed	ret;
	long	f1 = getRawBits();
	long	f2 = fixed.getRawBits();
	long	mul = f1 * f2;
	long	div = mul / (1 << bits_);
	ret.setRawBits(div);
	return ret;
}

Fixed	Fixed::operator/( Fixed const &fixed ) const{
	Fixed	ret;
	long	f1 = getRawBits();
	long	f2 = fixed.getRawBits();
	long	mul = f1 * (1 << bits_);
	long	div = mul / f2;
	ret.setRawBits(div);
	return ret;
}

Fixed	&Fixed::operator++( void ){
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++( int ){
	Fixed	ret(*this);
	operator++();
	return ret;
}

Fixed	&Fixed::operator--( void ){
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--( int ){
	Fixed	ret(*this);
	operator--();
	return ret;
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b ){
	if (a > b)
		return b;
	return a;
}

Fixed &Fixed::min( Fixed &a, Fixed &b ){
	if (a > b)
		return b;
	return a;
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b ){
	if (a < b)
		return b;
	return a;
}

Fixed &Fixed::max( Fixed &a, Fixed &b ){
	if (a < b)
		return b;
	return a;
}

float   Fixed::toFloat( void ) const{
    return (raw_ / (float)(1 << bits_));
}

int Fixed::toInt( void ) const{
    return (raw_ >> bits_);
}

int Fixed::getRawBits() const{
    return this->raw_;
}

void    Fixed::setRawBits(int const raw){
    this->raw_ = raw;
}

Fixed::~Fixed(){
	return ;
}
