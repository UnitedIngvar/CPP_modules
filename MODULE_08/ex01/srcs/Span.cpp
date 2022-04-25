#include <stdexcept>
#include "Span.hpp"
#include <iostream>

Span::Span()
{
	_max_size = 0;
	_sorted = false;
	_vector = std::list<int>();
}

Span::Span(Span const &other)
{
	*this = other;
}

Span::Span(int size)
{
	_max_size = size;
	_sorted = false;
	_vector = std::list<int>();
}

unsigned int	Span::abs(unsigned int num)
{
	if (num < 0)
	{
		return -num;
	}

	return num;
}

Span			&Span::operator=(Span const &other)
{
	_max_size = other._max_size;
	_vector = other._vector;
	return (*this);
}

void			Span::addNumber(int num)
{
	if (_vector.size() == _max_size)
	{
		throw std::range_error("adding too many elements to span");
	}

	_sorted = false;
	_vector.push_back(num);
}

unsigned long	Span::shortestSpan()
{
	if (_vector.size() < 2)
	{
		throw std::length_error("need minimum 2 elements to find the shortest span");
	}

	_vector.sort();

	std::list<int>::iterator next = _vector.begin();
	std::list<int>::iterator iter = next++;
	std::list<int>::iterator end = _vector.end();

	long min = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
	long tmp;
	while (next != end)
	{
		tmp = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
		if (tmp < min)
			min = tmp;
	}

	return (min);
}

unsigned long	Span::longestSpan()
{
	if (_vector.size() < 2)
	{
		throw std::length_error("need minimum 2 elements to find the longest span");
	}

	long min = *std::min_element(_vector.begin(), _vector.end());
	long max = *std::max_element(_vector.begin(), _vector.end());

	return max - min;
}

Span::~Span()
{

}
