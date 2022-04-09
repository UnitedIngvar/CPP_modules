#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Default constructor of <Animal>" << std::endl;
	_type = "Animal";
}

Animal::Animal(Animal const &other)
{
	std::cout << "Copy constructor of <Animal>" << std::endl;
	_type = other._type;
}

std::string const	&Animal::GetType(void) const
{
	return _type;
}

void				Animal::MakeSound(void) const
{

}

Animal				&Animal::operator=(Animal const &other)
{
	std::cout << "Copy assignment operator of <Animal>" << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor of <Animal>" << std::endl;
}
