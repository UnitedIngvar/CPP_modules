#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename L, typename Func>
void	iter(T array[], L length, Func func)
{
	for (L i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif
