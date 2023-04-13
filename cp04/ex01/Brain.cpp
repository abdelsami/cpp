
#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor for Brain called" << std::endl;
    return ;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = other;
	return ;
}

Brain::~Brain()
{
    std::cout << "Destructor for Brain called" << std::endl;
    return ;
}

Brain  &Brain::operator=(const Brain &other)
{
    int i;

    i = -1;
    std::cout << "Assignement operator for Animal called" << std::endl;
    while (++i < 100)
        this->ideas[i] = other.ideas[i];
    return (*this);
}