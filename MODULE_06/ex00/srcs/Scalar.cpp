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
	ParseValue(literal);
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
	std::cout << "____________PRINTING AN INT!!!_____________" << std::endl << std::endl;
	int i;
	std::memcpy(&i, &_bytes, sizeof(i));

	if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(_precision) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(_precision) << static_cast<double>(i) << std::endl;
	std::cout << std::endl << "_____________________________" << std::endl << std::endl;
}

void		Scalar::PrintChar() const
{
	std::cout << "_____PRINTING A CHAR!!!_________" << std::endl << std::endl;
	char c;
	std::memcpy(&c, &_bytes, sizeof(c));

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(_precision) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(_precision) << static_cast<double>(c) << std::endl;
	std::cout << std::endl << "______________________________" << std::endl << std::endl;
}

void		Scalar::PrintFloat() const
{
	std::cout << "_________PRINTING A FLOAT!!!_________" << std::endl << std::endl;
	float f;
	std::memcpy(&f, &_bytes, sizeof(f));

	if (f > 256 || f < 0 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f > 126 || f < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (f > INT_MAX || f < INT_MIN || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(_precision) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(_precision) << static_cast<double>(f) << std::endl;
	std::cout << std::endl << "_______________________" << std::endl << std::endl;
}

void		Scalar::PrintDouble() const
{
	std::cout << "__________________PRINTING A DOUBLE!!!________________" << std::endl << std::endl;
	double d;
	std::memcpy(&d, &_bytes, sizeof(d));

	if (d > 256 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d > INT_MAX || d < INT_MIN || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if ((d > __FLT_MAX__ || d < __FLT_MIN__))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(_precision) << static_cast<float>(d) << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(_precision) << d << std::endl;

	std::cout << std::endl << "______________________________" << std::endl << std::endl;
}

void		Scalar::ParseValue(std::string const &literal)
{
	switch (_type)
	{
		case t_int:
		{
			_precision = 1;
			int tmp = std::stoi(literal);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_char:
		{
			_precision = 1;
			char tmp = literal.at(0);
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_float:
		{
			float tmp = std::stof(literal);
			_precision = literal.length() - literal.find('.') - 2;
			std::memcpy(&_bytes, &tmp, sizeof(tmp));
			break;
		}
		case t_double:
		{
			double tmp = std::stod(literal);
			_precision = literal.length() - literal.find('.') - 1;
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
	switch (_type)
	{
		case t_int:
		{
			PrintInt();
			break;
		}
		case t_char:
		{
			PrintChar();
			break;
		}
		case t_float:
		{
			PrintFloat();
			break;
		}
		case t_double:
		{
			PrintDouble();
			break;
		}
		default:
		{
			std::cout << "Can't display the value" << std::endl;
			break;
		}
	}
}

Scalar::~Scalar()
{

}
