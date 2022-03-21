#include "StringChecker.hpp"

bool StringChecker::IsNumber(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if ((std::isdigit(str[i]) == 0))
			return false;
	}

	return true;
}
