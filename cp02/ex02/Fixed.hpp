
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
	Fixed	operator+(const Fixed &fixed1) const;
	Fixed	operator-(const Fixed &fixed1) const; 
	Fixed	operator*(const Fixed &fixed1) const;
	Fixed	operator/(const Fixed &fixed1) const;
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int n);
	Fixed	operator--(int n);

	bool	operator>(const Fixed &fixed1) const;
	bool	operator<(const Fixed &fixed1) const;
	bool	operator>=(const Fixed &fixed1) const;
	bool	operator<=(const Fixed &fixed1) const;
	bool	operator==(const Fixed &fixed1) const;
	bool	operator!=(const Fixed &fixed1) const;

    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;

	static Fixed	min(Fixed &fixed1, Fixed &fixed2);
	static Fixed	min(const Fixed &fixed1, const Fixed &fixed2);

	static Fixed	max(Fixed &fixed1, Fixed &fixed2);
	static Fixed	max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream &	operator<<(std::ostream & ostr, const Fixed &instance);

#endif
