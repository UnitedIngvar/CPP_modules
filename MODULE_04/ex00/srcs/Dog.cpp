#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
}

Dog::Dog(Dog const &other) : Animal(other)
{

}

void	Dog::MakeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

Dog	&Dog::operator=(Dog const &other)
{
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Dog::~Dog()
{

}
