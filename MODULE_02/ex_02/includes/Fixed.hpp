#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	private:
		int					_fixed_value;
		static const int	_fractional_bits_number = 8;

	public:
	Fixed();
	Fixed(const int integer);
	Fixed(const float floatingPoint);
	Fixed(const Fixed &fixed);

	Fixed			&operator=(const Fixed &fixed);
	bool			operator>(const Fixed &fixed) const;
	bool			operator<(const Fixed &fixed) const;
	bool			operator>=(const Fixed &fixed) const;
	bool			operator<=(const Fixed &fixed) const;
	bool			operator==(const Fixed &fixed) const;
	bool			operator!=(const Fixed &fixed) const;
	Fixed			operator+(const Fixed &fixed) const;
	Fixed			operator-(const Fixed &fixed) const;
	Fixed			operator*(const Fixed &fixed) const;
	Fixed			operator/(const Fixed &fixed) const;
	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
	Fixed			operator--(int);

	Fixed&			Min(Fixed& a, Fixed& b);
	Fixed&			Min(const Fixed& a, const Fixed& b);
	Fixed&			Max(Fixed& a, Fixed& b);
	Fixed&			Max(const Fixed& a, const Fixed& b);

	int				GetRawBits(void) const;
	void			SetRawBits(int const raw);
	float			ToFloat(void) const;
	int				ToInt(void) const;

	~Fixed();
};

std::ostream &	operator<<(std::ostream & o, Fixed const &fixed);
#endif
