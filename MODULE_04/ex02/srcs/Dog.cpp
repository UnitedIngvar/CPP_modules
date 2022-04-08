#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of <Dog>" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Copy constructor of <Dog>" << std::endl;
	_brain = new Brain(*(other._brain));
}

void	Dog::MakeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

Dog		&Dog::operator=(Dog const &other)
{
	std::cout << "Copy assignment opeator of <Dog>" << std::endl;
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
	std::cout << "Destructor of <Dog>" << std::endl;
	delete _brain;
}
