#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "Copy constructor of FragTrap" << std::endl;

	_name = other._name + "_constr_copy";
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
}

FragTrap::FragTrap(std::string const &name)
{
	std::cout << "Custom constructor of FragTrap " << name << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

void		FragTrap::HighFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " wants to give evryone a high five!"
		<< std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	std::cout << "This is copy assignment operator of FragTrap"
		<< std::endl;

	if (this != &other)
	{
		_name = other._name + "_copy";
		_hitpoints = other._hitpoints;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}

	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "This is a destructor of FragTrap " << _name
		<< std::endl;
}
