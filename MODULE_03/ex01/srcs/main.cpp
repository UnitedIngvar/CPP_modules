#include <iostream>
#include "ScavTrap.hpp"

void	ConstructorChainTest(void)
{
	std::cout << "This is constructor chain test"
		<< std::endl << std::endl;

	{
		ScavTrap *filthy = new ScavTrap("Filthy");
		ScavTrap *filthyConstructorCopy = new ScavTrap(*filthy);
		ScavTrap filthyAssignmentCopy;
		filthyAssignmentCopy = *filthy;
		delete filthy;
		delete filthyConstructorCopy;
	}

	std::cout << std::endl << std::endl
		<< "End of constructor chain test"
		<< std::endl
		<< "______________________________"
		<< std::endl << std::endl;
}

void	PolymorphismTest(void)
{
	std::cout << "This is polymorphism chain test"
		<< std::endl << std::endl;
	{
		ScavTrap *scaviar = new ScavTrap("Polly");
		ClapTrap copy = *scaviar;
		scaviar->Attack("Heresy");
		copy.Attack("Heresy");
		scaviar->TakeDamage(5);
		copy.TakeDamage(5);
		scaviar->BeRepaired(5);

		scaviar->GuardGate();
		delete scaviar;
	}

	std::cout << std::endl << std::endl
		<< "End of polymorphism chain test"
		<< std::endl
		<< "______________________________"
		<< std::endl << std::endl;
}

int		main(void)
{
	ConstructorChainTest();
	PolymorphismTest();
	system("leaks Serena_my_love | grep 'leaks for'");
}
