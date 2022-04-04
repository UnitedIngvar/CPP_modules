#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
}

void		HumanB::SetWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void		HumanB::Attack()
{
	std::cout << _weapon->GetType() << std::endl;
}
