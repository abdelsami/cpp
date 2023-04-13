
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The sound every single Wrong animal on earth makes... I guess"
		<< std::endl;
    return ;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->type);
}
