#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstring>
#include <stdexcept>

template<typename T>
class Array
{
private:
	T	*_array;
	int	_size;

public:
	Array();
	Array(Array const &other);
	Array(int size);

	Array	&operator=(Array const &other);

	T		&operator[](int index);
	T const	&operator[](int index) const;

	int		size() const;

	~Array();
};

template<typename T>
Array<T>::Array()
{
	_array = new T[1];
	_size = 1;
}

template<typename T>
Array<T>::Array(Array<T> const &other)
{
	_array = new T[other._size];
	*this = other;
}

template<typename T>
Array<T>::Array(int size)
{
	_array = new T[size];
	_size = size;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_size = other._size;
	delete[] _array;
	_array = new T[other._size];
	std::memcpy(_array, other._array, sizeof(T) * other._size);
	return *this;
}

template<typename T>
T		&Array<T>::operator[](int index)
{
	if (index >= _size || index < 0)
		throw std::exception();

	return _array[index];
}

template<typename T>
T const	&Array<T>::operator[](int index) const
{
	if (index >= _size || index < 0)
		throw std::exception();

	return _array[index];
}

template<typename T>
int		Array<T>::size() const
{
	return _size;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
}

#endif
