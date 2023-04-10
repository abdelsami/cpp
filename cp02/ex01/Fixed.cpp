
#include"Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f_p)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f_p;
}

Fixed::Fixed(const int v)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = v << fractional_bits;
}

Fixed::Fixed( const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = (int)roundf(f *(1 << fractional_bits));
}

Fixed    &Fixed::operator = (const Fixed &F)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = F.getRawBits();
    return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->fixed_point / (1 << this->fractional_bits))));
}

float	Fixed::toFloat(void) const
{
	return((float)this->fixed_point / (1 << this->fractional_bits));
}


std::ostream &	operator<<(std::ostream & ostr, const Fixed &instance)
{  
	ostr << instance.toFloat();
	return (ostr);
}
