
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat called" << std::endl;
	return;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeeeeeow" << std::endl;
    return ;
}

Cat  &Cat::operator=(const Cat &other)
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    this->type = other.getType();
    return (*this);
}
