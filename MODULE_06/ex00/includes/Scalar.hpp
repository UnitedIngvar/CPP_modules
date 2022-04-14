#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <string>
# include "Types.hpp"

class Scalar
{
private:
	litType	_type;
	int64_t	_bytes;
	int		_precision;

	void		DetermineType(std::string const &literal);
	void		ParseValue(std::string const &literal);
	bool		IsNumber(std::string const &str) const;
	void		PrintInt() const;
	void		PrintChar() const;
	void		PrintFloat() const;
	void		PrintDouble() const;

public:
	Scalar();
	Scalar(Scalar const &other);
	Scalar(std::string literal);

	Scalar		&operator=(Scalar const &other);
	void		Print() const;
	~Scalar();
};

#endif
