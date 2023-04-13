
#include"Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor for Animal called" << std::endl;
    return ;
}

Animal::Animal(Animal const &other)
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = other;
	return;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl;
    return ;
}

Animal  &Animal::operator=(const Animal &other)
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = other.getType();
    return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "The sound every single animal on earth makes... I guess"
		<< std::endl;
}

const std::string   &Animal::getType() const
{
    return (this->type);
}