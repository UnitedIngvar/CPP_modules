#include "StringChecker.hpp"

bool	StringChecker::IsNumber(std::string str)
{
	for (std::basic_string<char>::size_type i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
			i++;
		if (!std::isdigit(str[i]))
			return false;
	}

	return true;
}

bool	StringChecker::IsPhoneNumber(std::string str)
{
	int	i = 0;
	int	maxNumberOfDigits = 11;

	if (str[0] == '+')
	{
		maxNumberOfDigits = 12;
		i++;
	}
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	if (i != maxNumberOfDigits)
	{
		return false;
	}
	return true;
}

bool	StringChecker::IsWhitespaceOrEmpty(std::string str)
{
	int i = 0;

	if (str.empty())
		return true;

	while (str[i])
	{
		if (!isspace(str[i]))
		{
			return false;
		}
		i++;
	}
	return true;
}

StringChecker::~StringChecker()
{

}
