#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
}

Cat::Cat(Cat &other) : Animal(other)
{

}

void	Cat::MakeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Cat	&Cat::operator=(Cat const &other)
{
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Cat::~Cat()
{

}
