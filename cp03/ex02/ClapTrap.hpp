
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:

	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();
	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	const std::string	&getName() const ;

	ClapTrap&	operator=(const ClapTrap &other);

protected:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif