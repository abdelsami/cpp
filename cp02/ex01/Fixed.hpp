
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixed_point;
    static const int    fractional_bits = 8;
public:
    Fixed();
    Fixed(const int v);
    Fixed(const float v);
    Fixed(const Fixed &f_p);
    ~Fixed();
    Fixed   &operator = (const Fixed &F); 
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &	operator<<( std::ostream & ostr, const Fixed &instance);

#endif
