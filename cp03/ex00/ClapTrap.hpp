
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string);
		~ClapTrap();
		ClapTrap(ClapTrap const&);
		ClapTrap&	operator=(ClapTrap const&);
		void		display(std::ostream& stream) const;
		void 		attack(std::string const& target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_attackDamage;
};

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);

#endif