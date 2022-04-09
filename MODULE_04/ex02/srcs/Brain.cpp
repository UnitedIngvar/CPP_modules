#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Default constructor of <Brain>" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Copy constructor of <Brain>" << std::endl;
	if (this == &other)
	{
		return;
	}

	for (size_t i = 0; i < other._ideas->length(); i++)
	{
		_ideas[i].assign(other._ideas[i]);
	}
}

Brain	&Brain::operator=(Brain const &other)
{
	std::cout << "Copy assignment operator of <Brain>" << std::endl;
	if (this == &other)
	{
		return *this;
	}

	for (size_t i = 0; i < other._ideas->length(); i++)
	{
		_ideas[i].assign(other._ideas[i]);
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor of <Brain>" << std::endl;
}
