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

void	ScavTrap::GuardGate()
{
	std::cout << "ScavTrap " << _name << " is now in gate keeping mode"
		<< std::endl;
}

void	ScavTrap::Attack(std::string const &target)
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
