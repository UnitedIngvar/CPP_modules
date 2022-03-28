#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	Weapon();

	void				SetType(std::string type);
	std::string&		GetType();
};

#endif
