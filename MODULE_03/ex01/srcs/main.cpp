#include "ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap scaviar("Scaviar");
		ClapTrap *copy;
		copy = &scaviar;

		for (size_t i = 0; i < 25; i++)
		{
			scaviar.Attack("Heresy");
		}
		for (size_t i = 0; i < 25; i++)
		{
			copy->Attack("Heresy");
		}
		scaviar.TakeDamage(5);
		copy->TakeDamage(5);
		scaviar.BeRepaired(5);

		scaviar.GuardGate();

		copy->BeRepaired(5);
		scaviar.TakeDamage(5);
		copy->TakeDamage(5);
		scaviar.TakeDamage(5);
		copy->TakeDamage(5);
		scaviar.TakeDamage(5);
		copy->TakeDamage(5);
	}
	system("leaks Serena_my_love | grep 'leaks for'");
}
