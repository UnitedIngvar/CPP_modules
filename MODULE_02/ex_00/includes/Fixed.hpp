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

		Fixed &	operator=(Fixed const &assign);

		int		GetRawBits(void) const;
		void	SetRawBits(int const raw);

		~Fixed();
};

#endif
