#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

void	Zombie::Announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}
