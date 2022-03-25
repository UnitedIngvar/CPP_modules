#include "includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = &type;
}

Weapon::Weapon()
{
}

void	Weapon::setType(std::string type)
{
	_type->clear();
	_type->swap(type);
}

std::string	Weapon::getType()
{
	return *_type;
}
