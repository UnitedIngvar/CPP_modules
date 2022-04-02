#ifndef HUMANA_HPP
# define HUAMNA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanA(std::string name,
		Weapon &weapon);

	void		Attack();
};

#endif
