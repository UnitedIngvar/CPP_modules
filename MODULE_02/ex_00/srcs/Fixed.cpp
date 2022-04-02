#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_value = assign.GetRawBits();
	return *this;
}

int Fixed::GetRawBits(void) const
{
	std::cout << "GetRawBits member function called" <<std::endl;
	return _fixed_value;
}

void Fixed::SetRawBits(int const raw)
{
	std::cout << "SetRawBits member function called" <<std::endl;
	_fixed_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}
