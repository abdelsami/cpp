
#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name(""), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called for : "<< _name << std::endl;
}


ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << "Param constructor called for : "<< _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for : "<< _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cl)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(cl);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cl)
{
	_name = cl._name;
	_hitPoints = cl._hitPoints;
	_maxHitPoints = cl. _maxHitPoints;
	_energyPoints = cl._energyPoints;
	_maxEnergyPoints = cl._maxEnergyPoints;
	_attackDamage = cl._attackDamage;
	return (*this);
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << "ClapTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
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