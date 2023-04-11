
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor for ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Copy constructor for ScavTrap called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	this->_name = rhs.getName();
	return (*this);
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode!!!" << std::endl;
		return ;
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
    else
        std::cout << " No hit points or energy points left." << std::endl;
	return ;
}
