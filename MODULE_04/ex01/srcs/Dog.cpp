#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &other) : Animal(other)
{
	if (_brain != NULL)
	{
		delete _brain;
	}

	_brain = new Brain(*(other._brain));
}

void	Dog::MakeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

Dog	&Dog::operator=(Dog const &other)
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

Dog::~Dog()
{
	delete _brain;
}
