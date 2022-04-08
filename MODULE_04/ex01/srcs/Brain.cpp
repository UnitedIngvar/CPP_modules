#include "Brain.hpp"

Brain::Brain()
{

}

Brain::Brain(Brain const &other)
{
	if (this == &other)
	{
		return;
	}

	for (size_t i = 0; i < other._ideas->length(); i++)
	{
		_ideas[i].assign(other._ideas[i]);
	}
}

Brain &Brain::operator=(Brain const &other)
{
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
}
