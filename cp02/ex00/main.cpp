/*This demonstrates that all three objects have the same fixed_point value,
 which is the value initialized
 by the default constructor and copied from "a" to "b" and then from "b" to "c" . */

#include"Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b(a);
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}