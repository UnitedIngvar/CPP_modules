#include "Zombie.h"

int	main(void)
{
	Zombie *horde;

	std::string	name = "Monfy";
	int			n = 10;
	horde = ZombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		horde[i].Announce();
	}

	delete[] horde;
	system("leaks Moar_brainz | grep 'leaks for'");
}
