#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &other) : Animal(other)
{
	_brain = new Brain(*(other._brain));
}

void	Cat::MakeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Cat	&Cat::operator=(Cat const &other)
{
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
	delete _brain;
}
