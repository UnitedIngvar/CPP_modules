#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iterator>
# include <algorithm>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack() : std::stack<T>()
	{

	}

	MutantStack(MutantStack &copy) : std::stack<T>()
	{
		*this = copy;
	}

	MutantStack	&operator=(MutantStack &other)
	{
		std::stack<T>::operator=(other);

		return *this;
	}

	iterator	end()
	{
		return(this->c.end());
	}

	iterator	begin()
	{
		return(this->c.begin());
	}

	virtual ~MutantStack()
	{

	}
};

#endif
