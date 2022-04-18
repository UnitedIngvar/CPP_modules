#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename L, typename FOut>
void	iter(T &array, L length, FOut (func)(T&))
{
	for (L i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif
