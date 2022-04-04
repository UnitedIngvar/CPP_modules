#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed_value = other._fixed_value;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_value = (integer * (1 << _fractional_bits_number));
}

Fixed::Fixed(float const floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_value = (int)(roundf(floatingPoint * (1 << _fractional_bits_number)));
}

float			Fixed::ToFloat(void) const
{
	return (float)_fixed_value / (float(1 << _fractional_bits_number));
}

int				Fixed::ToInt(void) const
{
	return (int)(roundf(_fixed_value / (1 << _fractional_bits_number)));
}

Fixed			&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_value = fixed.GetRawBits();
	return (*this);
}

int				Fixed::GetRawBits(void) const
{
	return (_fixed_value);
}

void			Fixed::SetRawBits(int const raw)
{
	_fixed_value = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.ToFloat();
	return o;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
