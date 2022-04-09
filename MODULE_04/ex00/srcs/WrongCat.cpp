#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor of <WrongCat>" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	std::cout << "Copy constructor of <WrongCat>" << std::endl;
}

void	WrongCat::MakeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

WrongCat		&WrongCat::operator=(WrongCat const &other)
{
	std::cout << "Copy assignment operator of <WrongCat>" << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of <WrongCat>" << std::endl;
}
