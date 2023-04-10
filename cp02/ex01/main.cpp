/* prints the values of a, b, c, and d using the overloaded operator<<,
 which converts the fixed-point values to floating-point values
 and prints them to the standard output stream.*/

#include "Fixed.hpp"
#include <bitset>

int main( void ) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(10.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}
