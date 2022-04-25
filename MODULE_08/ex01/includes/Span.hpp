#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <list>

class Span
{
private:
	unsigned long	_max_size;
	std::list<int>	_vector;
	bool			_sorted;

	unsigned int	abs(unsigned int num);

public:
	Span();
	Span(Span const &other);
	Span(int size);

	Span	&operator=(Span const &other);

	template<class TContainer>
	void			addNumber(typename TContainer::const_iteartor &itBegin, typename TContainer::const_iteartor &itEnd);
	void			addNumber(int num);
	unsigned long	shortestSpan();
	unsigned long	longestSpan();

	~Span();
};

template<class TContainer>
void	Span::addNumber(typename TContainer::const_iteartor &itBegin, typename TContainer::const_iteartor &itEnd)
{
	size_t distance = std::distance(itBegin, itEnd);

	if (distance < 0)
	{
		throw std::invalid_argument("error occured while adding a range of numbers to the span. Bad iterators!");
	}

	if (_vector.size() + distance > _max_size)
	{
		throw std::range_error("adding too many elements to span");
	}

	_sorted = false;
	_vector.insert(_vector.end(), itBegin, itEnd);
}

#endif
