#ifndef STRINGCHECKER_H
# define STRINGCHECKER_H
# include <string>

class StringChecker
{
private:

public:
	bool	IsNumber(std::string str);
	bool	IsPhoneNumber(std::string str);
	bool	IsWhitespaceOrEmpty(std::string str);
};

#endif
