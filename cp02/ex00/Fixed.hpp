
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 fixed_point;
    static const int    fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &f_p);
    ~Fixed();
    Fixed   &operator = (const Fixed &F);
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
};

#endif 