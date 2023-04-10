
#include"Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name ;
	std::cout << ": Aaahhh...last breath...but...virus lives on..." << std::endl;
}


void	Zombie::announce()
{
	std::cout <<  get_name() ;
	std::cout << ": Uuuggghh...brains...uuuggghh..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
    return ;
}

std::string Zombie::get_name()
{
    return(this->name);
}
