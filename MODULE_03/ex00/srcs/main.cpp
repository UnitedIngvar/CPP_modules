#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap caren("Caren");
		ClapTrap copy = caren;
		copy = caren;

		caren.Attack("Charly");

		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");
		copy.Attack("Charly");

		caren.TakeDamage(5);
		copy.TakeDamage(5);
		caren.BeRepaired(5);
		copy.BeRepaired(5);
		caren.TakeDamage(5);
		copy.TakeDamage(5);
		caren.TakeDamage(5);
		copy.TakeDamage(5);
		caren.TakeDamage(5);
		copy.TakeDamage(5);
	}

	system("leaks Aaaaand_OPEN | grep 'leaks for'");
}
