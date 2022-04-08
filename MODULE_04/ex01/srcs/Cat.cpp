#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of <Cat>" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Copy constructor of <Cat>" << std::endl;
	_brain = new Brain(*(other._brain));
}

void	Cat::MakeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Cat	&Cat::operator=(Cat const &other)
{
	std::cout << "Copy assignment opeator of <Cat>" << std::endl;
	if (this == &other)
	{
		return *this;
	}
	if (_brain != NULL)
	{
		delete _brain;
	}

	_type = other._type;
	_brain = new Brain(*(other._brain));

	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor of <Cat>" << std::endl;
	delete _brain;
}
