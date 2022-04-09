#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	SomePolymorphicFunction(const Animal *animal)
{
		std::cout << "this is "
		<< animal->GetType() << " in SomePolymorphicFunction!"
		<< std::endl;
}

void	WrongPolymorphismTest()
{
	WrongAnimal *wrong = new WrongCat();
	WrongCat	*wrongCat = new WrongCat();

	wrongCat->MakeSound();
	wrong->MakeSound();
	delete wrong;
	delete wrongCat;
}

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->GetType() << " " << std::endl;
	std::cout << cat->GetType() << " " << std::endl;
	cat->MakeSound();
	dog->MakeSound();
	meta->MakeSound();

	delete meta;
	meta = dog;
	std::cout << meta->GetType() << " " << std::endl;
	meta->MakeSound();

	SomePolymorphicFunction(cat);
	SomePolymorphicFunction(dog);
	SomePolymorphicFunction(meta);

	WrongPolymorphismTest();

	delete dog;
	delete cat;
}
