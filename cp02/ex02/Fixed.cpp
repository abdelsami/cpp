
#include"Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &f_p)
{
    *this = f_p;
}

Fixed::Fixed(const int v)
{
    this->fixed_point = v << fractional_bits;
}

Fixed::Fixed( const float f)
{
    this->fixed_point = (int)roundf(f *(1 << fractional_bits));
}

Fixed    &Fixed::operator = (const Fixed &F)
{
    this->fixed_point = F.getRawBits();
    return (*this);
}

Fixed	Fixed::operator+(const Fixed &f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

bool	Fixed::operator>(const Fixed &f) const
{
	return (this->toFloat() > f.toFloat());
}
bool	Fixed::operator<(const Fixed &f) const
{
	return (this->toFloat() < f.toFloat());
}
bool	Fixed::operator>=(const Fixed &f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (this->toFloat() <= f.toFloat());
}

bool	Fixed::operator==(const Fixed &f) const
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (this->toFloat() != f.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	(this->fixed_point)++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	(this->fixed_point)--;
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	(void)n;
	Fixed	aux = *this;
	++*this;
	return (aux);
}

Fixed	Fixed::operator--(int n)
{
	(void)n;
	Fixed	aux = *this;
	--*this;
	return (aux);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits( const int raw )
{
	this->fixed_point = raw;
}

int		Fixed::toInt( void ) const
{
	return ((int)(roundf((float)this->fixed_point / (1 << this->fractional_bits))));
}

float	Fixed::toFloat( void ) const
{
	return((float)this->fixed_point / (1 << this->fractional_bits));
}


std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

Fixed	Fixed::min( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed(fixed2));
	return (Fixed(fixed1));
}

Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed(fixed2));
	return (Fixed(fixed1));
}

Fixed	Fixed::max( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed(fixed1));
	return (Fixed(fixed2));
}

Fixed	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed(fixed1));
	return (Fixed(fixed2));
}