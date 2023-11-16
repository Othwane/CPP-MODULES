#ifndef FIXED__HPP
#define FIXED__HPP

#include <iostream>

class Fixed
{
private:
    int raw_;
    static const int bits_ = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed& fixed);
    Fixed(const int n);
    Fixed(const float f);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator = (const Fixed& fixed);
    bool	operator<( Fixed const &other ) const;
	bool	operator<=( Fixed const &other ) const;
	bool	operator>( Fixed const &other ) const;
	bool	operator>=( Fixed const &other ) const;
	bool	operator==( Fixed const &other ) const;
	bool	operator!=( Fixed const &other ) const;
	Fixed	operator+( Fixed const &other ) const;
	Fixed	operator-( Fixed const &other ) const;
	Fixed	operator*( Fixed const &other ) const;
	Fixed	operator/( Fixed const &other ) const;
	Fixed	&operator++( void ); // prefix ++
	Fixed	operator++( int ); // postfix ++
	Fixed	&operator--( void ); // prefix --
	Fixed	operator--( int ); // postfix --
	static Fixed const	&min( Fixed const &a, Fixed const &b );
	static Fixed const	&max( Fixed const &a, Fixed const &b );
	static Fixed &min( Fixed &a, Fixed &b );
	static Fixed &max( Fixed &a, Fixed &b );
    int    getRawBits() const;
    void    setRawBits(int const raw);
    ~Fixed();
};
    std::ostream& operator << (std::ostream& x, const Fixed& fixed);

#endif
