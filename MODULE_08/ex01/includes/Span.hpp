#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int>	_vector;
	bool				_sorted;

	unsigned int	abs(unsigned int num);

public:
	Span();
	Span(int size);

	Span	&operator=(Span const &other);

	template<class TContainer>
	void			addNumber(typename TContainer::const_iteartor &itBegin, typename TContainer::const_iteartor &itEnd);
	void			addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class SpanIsFullExcetption : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class SpanIsTooSmallExcetpion : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	~Span();
};

template<class TContainer>
void	Span::addNumber(typename TContainer::const_iteartor &itBegin, typename TContainer::const_iteartor &itEnd)
{
	_sorted = false;
	std::copy(itBegin, itEnd, _vector.begin() + _vector.size());
}

#endif
