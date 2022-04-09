#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of <Cat>" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Copy constructor of <Cat>" << std::endl;
}

void	Cat::MakeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Cat		&Cat::operator=(Cat const &other)
{
	std::cout << "Copy assignment operator of <Cat>" << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor of <Cat>" << std::endl;
}
