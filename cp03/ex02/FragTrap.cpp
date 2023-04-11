
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap(const std::string &name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	this->_name = rhs.getName();
	return (*this);
}

void		FragTrap::highFivesGuys()
{
	std::cout << "Hey guys! Give me a high five!!!" << std::endl;
	return ;
}
