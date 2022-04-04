#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	_name = std::string().empty();
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "This is a constructor of " << name << std::endl;
	_name = name;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "This is a copy constructor of " << _name << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "In copy assignment!" << std::endl;
	if (this != &other)
	{
		_name = "copy_name";
		_hitpoints = other._hitpoints;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}

	return *this;
}

void		ClapTrap::Attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attacks "
	<< target << " causing " << _attack_damage
	<< " points of damage!" << std::endl;
}

void		ClapTrap::TakeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "Whoops! Clap trap " << _name
		<< " is already dead!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << _name << " takes "
	<< amount << " points of damage" << std::endl;

	if (_hitpoints - amount > 0)
	{
		_hitpoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is now dead :("
		<< std::endl;

		_hitpoints = 0;
	}
}

void		ClapTrap::BeRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " restores "
	<< amount << " of hit points" << std::endl;
	_hitpoints += amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << "This is a destructor of " << _name << std::endl;
}
