#ifndef PHONETERMINAL_H
# define PHONETERMINAL_H
# include "Contact.hpp"
# include "PhoneBook.hpp"

class PhoneBookTerminal
{
private:
	PhoneBook	*_phone_book;

	std::string	PromptForInput(std::string prompt);
	Contact		*CreateContact();

public:
	PhoneBookTerminal();

	void		ProcessCommand(std::string command);
};

#endif
