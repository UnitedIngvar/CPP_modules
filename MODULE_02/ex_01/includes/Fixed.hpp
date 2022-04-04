#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	private:
		int					_fixed_value;
		static int const	_fractional_bits_number = 8;

	public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(int const integer);
	Fixed(float const floatingPoint);

	Fixed			&operator=(Fixed const &other);

	int				GetRawBits(void) const;
	void			SetRawBits(int const raw);
	float			ToFloat(void) const;
	int				ToInt(void) const;

	~Fixed(void);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
