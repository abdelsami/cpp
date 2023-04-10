
#include"Zombie.hpp"

void announceHorde(Zombie *zombies, int n)
{
    for (int i = 0; i < n; i++)
        zombies[i].announce();
}


int main()
{
    Zombie *zombies;
    
    zombies = zombieHorde(10, "ms3od w brik w s7abo");
    announceHorde(zombies, 10);
    delete [] zombies;

    return 0;
}
