#ifndef PHONETERMINAL_H
# define PHONETERMINAL_H
# include "Contact.hpp"
# include "PhoneBook.hpp"
# include "StringChecker.hpp"

class PhoneBookTerminal
{
private:
	PhoneBook		*_phone_book;
	StringChecker	*_string_checker;

	bool		ProcessAdd();
	bool		ProcessSearch();
	bool		ProcessCommand(std::string command);
	std::string	PromptForInput(std::string prompt);
	Contact		*CreateContact();

public:
	PhoneBookTerminal();

	void		StartTerminal();
	~PhoneBookTerminal();
};

#endif
