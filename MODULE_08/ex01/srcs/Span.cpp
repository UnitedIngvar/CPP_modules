#include <stdexcept>
#include "Span.hpp"
#include <iostream>

Span::Span()
{
	_max_size = 0;
	_values = std::list<int>();
}

Span::Span(Span const &other)
{
	*this = other;
}

Span::Span(int size)
{
	_max_size = size;
	_values = std::list<int>();
}

Span			&Span::operator=(Span const &other)
{
	_max_size = other._max_size;
	_values = other._values;
	return (*this);
}

void			Span::addNumber(int num)
{
	if (_values.size() == _max_size)
	{
		throw std::range_error("excpetion: adding too many elements to span");
	}

	_values.push_back(num);
}

unsigned long	Span::shortestSpan()
{
	if (_values.size() < 2)
	{
		throw std::length_error("excpetion: need minimum 2 elements to find the shortest span");
	}

	_values.sort();

	std::list<int>::iterator next = _values.begin();
	std::list<int>::iterator iter = next++;
	std::list<int>::iterator end = _values.end();

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

unsigned long	Span::longestSpan() const
{
	if (_values.size() < 2)
	{
		throw std::length_error("excpetion: need minimum 2 elements to find the longest span");
	}

	long min = *std::min_element(_values.begin(), _values.end());
	long max = *std::max_element(_values.begin(), _values.end());

	return max - min;
}

Span::~Span()
{

}
