
#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a;
	ClapTrap	b("taylor");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	a.attack("jacob");
	std::cout << b << std::endl;
	b.attack("jacob");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("jacob");
}