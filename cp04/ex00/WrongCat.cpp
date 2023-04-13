
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default constructor for WrongCat called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat called" << std::endl;
	return;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meeeeeeeow"
		<< std::endl;
    return ;
}

WrongCat &WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Assignement operator for WrongCat called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}
