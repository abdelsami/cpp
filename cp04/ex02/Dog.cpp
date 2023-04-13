
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;
	return;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called" << std::endl;
	return;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf!" << std::endl;
}

Dog  &Dog::operator=(const Dog &other)
{
    std::cout << "Assignement operator for Dog called" << std::endl;
    this->type = other.getType();
	this->DogBrain = other.getBrain();
    return (*this);
}

Aanimal	&Dog::operator=(Aanimal const &rhs)
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->DogBrain) = *(rhs.getBrain());
	return *this;
}


Brain	*Dog::getBrain() const
{
	return (this->DogBrain);
}