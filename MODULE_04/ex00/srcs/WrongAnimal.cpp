#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of <WrongAnimal>" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "Copy constructor of <WrongAnimal>" << std::endl;
	_type = other._type;
}

std::string const	&WrongAnimal::GetType(void) const
{
	return _type;
}

void				WrongAnimal::MakeSound(void) const
{
	std::cout << "Wrong animal sound" << std::endl;
}

WrongAnimal				&WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "Copy assignment operator of <WrongAnimal>" << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of <WrongAnimal>" << std::endl;
}
