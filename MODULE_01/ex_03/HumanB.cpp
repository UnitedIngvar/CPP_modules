#include "includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
}

void		HumanB::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

void		HumanB::attack()
{
	std::cout << "Pisya" << std::endl;
	std::cout << _weapon.getType() << std::endl;
}
