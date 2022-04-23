#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <type_traits>
# include <algorithm>

class ItemNotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Index not found";
	}
};

template <class T>
typename T::const_iterator	easyfind(T const &container, int item)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), item);
	if (it == container.end())
		throw ItemNotFoundException();
	return it;
}

#endif
