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
	Fixed(Fixed const &fixed);

	Fixed			&operator=(Fixed const &fixed);

	int				GetRawBits(void) const;
	void			SetRawBits(int const raw);
	float			ToFloat(void) const;
	int				ToInt(void) const;

	~Fixed();
};

std::ostream &	operator<<(std::ostream & o, Fixed const &fixed);
#endif
