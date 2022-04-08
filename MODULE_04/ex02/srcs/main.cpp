#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void	TestAllocAndDealloc()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In alloc/dealloc test!" << std::endl << std::endl;

	const int number = 50;
	Animal **animals = new Animal*[number];

	for (size_t i = 0; i < number; i++)
	{
		if (i <= number / 2)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	for (size_t i = 0; i < number; i++)
	{
		animals[i]->MakeSound();
		delete animals[i];
	}
	delete[] animals;

	std::cout << std::endl;
	std::cout << "End of alloc/dealloc test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

void	TestCopyAssignment()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In copy assignment test!" << std::endl << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	Dog *otherDog = new Dog();
	Cat *otherCat = new Cat();

	*dog = *otherDog;
	*cat = *otherCat;

	delete dog;
	delete cat;
	delete otherDog;
	delete otherCat;

	std::cout << std::endl;
	std::cout << "End of copy assignment test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

void	TestCopyConstructor()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In copy constructor test!" << std::endl << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	Dog *copiedDog = new Dog(*dog);
	Cat *copiedCat = new Cat(*cat);

	delete dog;
	delete cat;
	delete copiedDog;
	delete copiedCat;

	std::cout << std::endl;
	std::cout << "End of copy constructor test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

int	main(void)
{
	//Animal *animal = new Animal();
	TestAllocAndDealloc();
	TestCopyAssignment();
	TestCopyConstructor();
}
