#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << "Default Constructor called of Fixed" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed_value = other._fixed_value;
}

Fixed	&Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_value = assign.GetRawBits();
	return *this;
}

int		Fixed::GetRawBits(void) const
{
	std::cout << "GetRawBits member function called" <<std::endl;
	return _fixed_value;
}

void	Fixed::SetRawBits(int const raw)
{
	std::cout << "SetRawBits member function called" <<std::endl;
	_fixed_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called of Fixed" << std::endl;
}
