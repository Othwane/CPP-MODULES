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
    int    getRawBits() const;
    void    setRawBits(int const raw);
    ~Fixed();
};
    std::ostream& operator << (std::ostream& x, const Fixed& fixed);

#endif
