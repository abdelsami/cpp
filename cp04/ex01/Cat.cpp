
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->CatBrain = new Brain();
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
	delete this->CatBrain;
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
	this->CatBrain = other.getBrain();
    return (*this);
}

Animal	&Cat::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->CatBrain) = *(rhs.getBrain());
	return (*this);
}

Brain	*Cat::getBrain( void ) const
{
	return (this->CatBrain);
}
