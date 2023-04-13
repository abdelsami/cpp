
#include"Aanimal.hpp"

Aanimal::~Aanimal()
{
    std::cout << "Destructor for Aanimal called" << std::endl;
    return ;
}

const std::string   &Aanimal::getType() const
{
    return (this->type);
}
