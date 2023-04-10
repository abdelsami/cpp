
#include"Fixed.hpp"

Fixed::Fixed() // the default constructor. 
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f_p) //the copy constructor 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f_p;
}

Fixed    &Fixed::operator=(const Fixed &F) //copy assignment operator. 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = F.fixed_point;
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
