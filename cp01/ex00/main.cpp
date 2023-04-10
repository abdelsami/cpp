
#include"Zombie.hpp"

int	main()
{
	Zombie	*Zombie;
	std::cout << "\n    ********  Beware! The undead are rising! The first zombie is here!  ********\n"<< std::endl;
	Zombie = newZombie("ms3oud");
	Zombie->announce();
	delete Zombie;
	std::cout << "\n    ********  We've got company! Zombie number two is also here  ********\n"<< std::endl;
	randomChump("brik");
	return(0);
}