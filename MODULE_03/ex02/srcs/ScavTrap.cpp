#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Copy constructor of ScavTrap" << std::endl;

	_name = other._name + "_constr_copy";
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
}

ScavTrap::ScavTrap(std::string const &name)
{
	std::cout << "Custom constructor of ScavTrap " << name << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

void		ScavTrap::GuardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in gate keeping mode"
		<< std::endl;
}

void		ScavTrap::Attack(std::string const &target)
{
	if (!EnsureCanAct())
	{
		return;
	}

	std::cout << "ScavTrap " << _name << " attacks "
		<< target << " causing " << _attack_damage
		<< " points of damage!" << std::endl;

	_energy_points--;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "This is copy assignment operator of ScavTrap"
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "This is a destructor of ScavTrap " << _name
		<< std::endl;
}
