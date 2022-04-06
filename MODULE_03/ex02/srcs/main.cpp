#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	ConstructorChainTest(void)
{
	std::cout << "This is constructor chain test"
		<< std::endl << std::endl;

	{
		ScavTrap *scav = new ScavTrap("Scav");
		FragTrap *frag = new FragTrap("Frag");
		ScavTrap *scavConstructorCopy = new ScavTrap(*scav);
		FragTrap *fragConstructorCopy = new FragTrap(*frag);
		ScavTrap scavAssignmentCopy;
		FragTrap fragAssignmentCopy;
		scavAssignmentCopy = *scav;
		fragAssignmentCopy = *frag;
		delete scav;
		delete scavConstructorCopy;
		delete frag;
		delete fragConstructorCopy;
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
		FragTrap *scaviar = new FragTrap("Fragger");
		ClapTrap copy = *scaviar;

		scaviar->Attack("Heresy");
		copy.Attack("Heresy");
		scaviar->TakeDamage(5);
		copy.TakeDamage(5);
		scaviar->BeRepaired(5);

		scaviar->HighFiveGuys();
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
	system("leaks Repetitive_work | grep 'leaks for'");
}
