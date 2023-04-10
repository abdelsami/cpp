
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    Weapon&	getWeapon();
    void			attack();
};



#endif