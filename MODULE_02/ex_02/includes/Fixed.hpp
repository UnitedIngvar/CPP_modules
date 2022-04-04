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
	Fixed(Fixed const &other);
	Fixed(int const integer);
	Fixed(float const floatingPoint);

	Fixed				&operator=(Fixed const &fixed);
	bool				operator>(Fixed const &fixed) const;
	bool				operator<(Fixed const &fixed) const;
	bool				operator>=(Fixed const &fixed) const;
	bool				operator<=(Fixed const &fixed) const;
	bool				operator==(Fixed const &fixed) const;
	bool				operator!=(Fixed const &fixed) const;
	Fixed				operator+(Fixed const &fixed) const;
	Fixed				operator-(Fixed const &fixed) const;
	Fixed				operator*(Fixed const &fixed) const;
	Fixed				operator/(Fixed const &fixed) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);

	static Fixed&		Min(Fixed& a, Fixed& b);
	static const Fixed&	Min(Fixed const &a, Fixed const &b);
	static Fixed&		Max(Fixed& a, Fixed& b);
	static const Fixed&	Max(Fixed const &a, Fixed const &b);

	int					GetRawBits(void) const;
	void				SetRawBits(int const raw);
	float				ToFloat(void) const;
	int					ToInt(void) const;

	~Fixed();
};

std::ostream &			operator<<(std::ostream & o, Fixed const &fixed);
#endif
