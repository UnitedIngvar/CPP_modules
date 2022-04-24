#include <stdexcept>
#include "Span.hpp"
#include <iostream>

Span::Span()
{
	_sorted = false;
	_vector = std::vector<int>();
}

Span::Span(int size)
{
	_sorted = false;
	_vector = std::vector<int>(size);
}

unsigned int	Span::abs(unsigned int num)
{
	if (num < 0)
	{
		return -num;
	}

	return num;
}

void			Span::addNumber(int num)
{
	if (_vector.size() + 1 >= _vector.max_size())
	{
		throw std::out_of_range("max_size is exceeded");
	}

	_sorted = false;
	_vector.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	if (_vector.size() < 2)
	{
		throw SpanIsTooSmallExcetpion();
	}

	if (!_sorted)
	{
		std::sort(_vector.begin(), _vector.end());
	}
	std::vector<int>::iterator prevIt = _vector.begin();
	std::vector<int>::iterator nextIt = prevIt - 1;
	unsigned int minSpan = abs(*prevIt - *nextIt);

	std::cout << "min span now: " << minSpan << std::endl;
	while(nextIt != _vector.end())
	{
		unsigned int span = abs(*nextIt - *prevIt);

		std::cout << "prevIt: " << *prevIt << std::endl;
		std::cout << "nextIt: " << *nextIt << std::endl;
		if (span < minSpan)
		{
			std::cout << "min span now: " << minSpan << std::endl;
			minSpan = span;
		}
		prevIt = nextIt;
		nextIt++;
	}

	_sorted = true;
	return minSpan;
}

unsigned int	Span::longestSpan()
{
	if (_vector.size() < 2)
	{
		throw SpanIsTooSmallExcetpion();
	}

	if (!_sorted)
	{
		std::sort(_vector.begin(), _vector.end());
	}

	_sorted = true;
	std::cout << "back: "  << _vector.back() << ", front: " << _vector.front() << std::endl;
	return abs(_vector.back() - _vector.front());
}

const char *Span::SpanIsFullExcetption::what() const throw()
{
	return "span is full";
}

const char *Span::SpanIsTooSmallExcetpion::what() const throw()
{
	return "span has less than 2 numbers. Can't search!";
}

Span::~Span()
{

}
