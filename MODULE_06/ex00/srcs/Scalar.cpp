#include "Scalar.hpp"
#include <iostream>
#include <iomanip>

Scalar::Scalar()
{
	_type = t_undef;
	_bytes = 0;
}

Scalar::Scalar(Scalar const &other)
{
	*this = other;
}

Scalar::Scalar(std::string literal)
{
	DetermineType(literal);
	StoreValue(literal);
}

bool	Scalar::IsNumber(std::string const &str) const
{
	for (uint64_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
			i++;
		if (!std::isdigit(str[i]))
			return false;
	}

	return true;
}

void		Scalar::PrintInt() const
{
	int integer;
	std::memcpy(&integer, &_bytes, sizeof(integer));
	if (integer > 256 || integer < 0)
		std::cout << "char: impossible" << std::endl;
	else if (integer > 126 || integer < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(integer) << "'" << std::endl;

	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(integer) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(integer) << std::endl;
}

void		Scalar::PrintChar() const
{

}

void		Scalar::PrintFloat() const
{

}

void		Scalar::PrintDouble() const
{

}

void		Scalar::StoreValue(std::string const &literal)
{
	switch (_type)
	{
		case t_int:
		{
			int tmp = std::stoi(literal);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_char:
		{
			char tmp = literal.at(0);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_float:
		{
			float tmp = std::stof(literal);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_double:
		{
			double tmp = std::stod(literal);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		default:
		{
			_bytes = 0;
			break;
		}
	}
}

void		Scalar::DetermineType(std::string const &literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		_type = t_float;
	else if (literal == "-inf" || literal == "+inf" || literal == "nan")
		_type = t_double;
	else if (literal.length() > 1 && literal.at(literal.length() - 1) == 'f')
		_type = t_float;
	else if (literal.length() > 2 && literal.find('.') != std::string::npos)
		_type = t_double;
	else if (literal.length() == 1)
	{
		char c = literal.at(0);
		if (c >= '0' && c <= '9')
			_type = t_int;
		else if (c >= 32 && c <= 126)
			_type = t_char;
		else
			_type = t_undef;
	}
	else if (IsNumber(literal))
		_type = t_int;
	else
		_type = t_undef;
}

Scalar		&Scalar::operator=(Scalar const &other)
{
	_type = other._type;
	_bytes = other._bytes;

	return *this;
}

void		Scalar::Print() const
{
	if (_type == t_int)
		PrintInt();
}

Scalar::~Scalar()
{

}
