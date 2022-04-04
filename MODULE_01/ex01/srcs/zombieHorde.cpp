#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		horde[i].SetName(name);
	}
	return horde;
}
