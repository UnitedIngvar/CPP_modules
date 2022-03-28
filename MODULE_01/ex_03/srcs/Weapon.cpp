#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

void			Weapon::SetType(std::string type)
{
	_type = type;
}

std::string&	Weapon::GetType()
{
	return _type;
}
