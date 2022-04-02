#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
}

Fixed::Fixed(const Fixed &assign)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed_value = assign.GetRawBits();
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_value = (integer * (1 << _fractional_bits_number));
}

Fixed::Fixed(const float floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_value = (int)(roundf(floatingPoint * (1 << _fractional_bits_number)));
}

float	Fixed::ToFloat(void) const
{
	return (float)_fixed_value / (float(1 << _fractional_bits_number));
}

int		Fixed::ToInt(void) const
{
	return (int)(roundf(_fixed_value / (1 << _fractional_bits_number)));
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_value = fixed.GetRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return _fixed_value > fixed.GetRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return _fixed_value < fixed.GetRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return _fixed_value >= fixed.GetRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return _fixed_value <= fixed.GetRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return _fixed_value != fixed.GetRawBits();
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return _fixed_value == fixed.GetRawBits();
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(_fixed_value + fixed.GetRawBits());
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(_fixed_value - fixed.GetRawBits());
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(ToFloat() * fixed.ToFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return Fixed(ToFloat() / fixed.ToFloat());
}

Fixed	&Fixed::operator++()
{
	_fixed_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return temp;
}

Fixed	&Fixed::operator--()
{
	_fixed_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return temp;
}

Fixed&	Fixed::Min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

Fixed&	Fixed::Min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed&	Fixed::Max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

Fixed&	Fixed::Max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}

int				Fixed::GetRawBits(void) const
{
	return (_fixed_value);
}

void			Fixed::SetRawBits(const int raw)
{
	_fixed_value = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.ToFloat();
	return o;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
