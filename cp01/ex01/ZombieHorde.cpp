
#include"Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    if (n >= 1)
	{
         std::cout << "\n********  We've got a horde of zombies here  ********\n" << std::endl;

     Zombie* zombies = new Zombie[n];

     for (int i = 0; i < n; i++) {
        zombies[i].set_name(name);
    }
    return zombies;
    }
    	std::cout << "A Horde can not contain less than 1 Zombie." << std::endl;
		return (NULL);
}
