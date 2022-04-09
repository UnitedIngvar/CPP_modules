#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of <Dog>" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Copy constructor of <Dog>" << std::endl;
}

void	Dog::MakeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

Dog		&Dog::operator=(Dog const &other)
{
	std::cout << "Copy assignment operator of <Dog>" << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor of <Dog>" << std::endl;
}
