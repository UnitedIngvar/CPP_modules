#include "Animal.hpp"

Animal::Animal()
{
	_type = "animal";
}

Animal::Animal(Animal const &other)
{
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
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Animal::~Animal()
{

}
