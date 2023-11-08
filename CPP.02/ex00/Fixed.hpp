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
    Fixed(Fixed& fixed);
    Fixed& operator = (Fixed& fixed);
    int    getRawBits();
    void    setRawBits(int const raw);
    ~Fixed();
};

#endif