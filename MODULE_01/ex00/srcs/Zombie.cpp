#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	_name = name;
}

void	Zombie::Announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}
