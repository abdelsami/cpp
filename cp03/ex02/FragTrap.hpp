
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &src);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &other);

	void		highFivesGuys();
};

#endif