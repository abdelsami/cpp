
#include"HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

Weapon HumanB::getWeapon()
{
    return (*(this->weapon));
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with " << this->weapon->getType() \
            << std::endl;
        return ;
    }
    std::cout << this->name
			<< " can't attack because they don't have a weapon" << std::endl;
}