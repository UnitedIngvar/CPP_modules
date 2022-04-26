#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <list>

class Span
{
private:
	unsigned long	_max_size;
	std::list<int>	_values;

public:
	Span();
	Span(Span const &other);
	Span(int size);

	Span	&operator=(Span const &other);


	template<class TIterator>
	void			addNumber(TIterator itBegin, TIterator itEnd);
	void			addNumber(int num);
	unsigned long	shortestSpan();
	unsigned long	longestSpan() const;

	~Span();
};

template<class TIterator>
void	Span::addNumber(TIterator itBegin, TIterator itEnd)
{
	typename std::iterator_traits<TIterator>::difference_type distance = std::distance(itBegin, itEnd);

	if (_values.size() + distance > _max_size)
	{
		throw std::range_error("adding too many elements to span");
	}

	_values.insert(_values.end(), itBegin, itEnd);
}

#endif
