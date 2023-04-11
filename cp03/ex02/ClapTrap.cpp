
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Cppy constructor for ClapTrap called" << std::endl;
	*this = other;
	return ;
}

ClapTrap::~ClapTrap()
{
		std::cout << "Destructor for ClapTrap called" << std::endl;
	return;
}

const std::string	&ClapTrap::getName() const
{
	return (this->_name);
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other.getName();
	return (*this);
}

void		ClapTrap::attack(std::string const & target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
	    std::cout << "ClapTrap " << this->_name << " attack " << target
		    << " causing " << this->_attackDamage << " points of damage!"
		    << std::endl;
            this->_energyPoints--;
    }
    else
        std::cout << " No hit points or energy points left." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " damage and got smashed.." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " hit points, OUCH! Only got " << this->_hitPoints
			<< " hit points left." << std::endl;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
    {
        this->_hitPoints += amount;
	    std::cout << "ClapTrap " << this->_name << " was just repaired "
		    << amount << " hit points, now he's got " << this->_hitPoints
		    << ". It ain't much, but it's honest work" << std::endl;
            this->_energyPoints--;
    }
    else
        std::cout << " No hit points or energy points left." << std::endl;
	return ;
}