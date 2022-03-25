#include "Zombie.h"

int	main(void)
{
	std::string name = "Monfy";
	Zombie *zombie = NewZombie(name);
	RandomChump(name);
	delete zombie;
}
