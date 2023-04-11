
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const&);
		void		display(std::ostream& stream) const;
		void 		attack(std::string const& target);
		void		guardGate();

	protected:
};

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& cl);

#endif
