#include "includes/PhoneBookTerminal.hpp"
#include "includes/Contact.hpp"
#include "includes/StringChecker.hpp"
#include <string>
#include <iostream>

PhoneBookTerminal::PhoneBookTerminal()
{
	_phone_book = new PhoneBook();
}

std::string	PromptForInput(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::cin >> input;
	while (input.empty())
	{
		std::cout << "Field can't be empty. Try again" << std::endl;
		std::cout << prompt;
		std::cin >> input;
	}
	return input;
}

Contact	*CreateContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	firstName = PromptForInput("First name: ");
	lastName = PromptForInput("Last name: ");
	nickname = PromptForInput("Nickname: ");
	phoneNumber = PromptForInput("Phone number: ");
	darkestSecret = PromptForInput("The darkest secret: ");
	return new Contact(firstName,
				lastName,
				nickname,
				phoneNumber,
				darkestSecret);
}

void	PhoneBookTerminal::ProcessCommand(std::string command)
{
	StringChecker *stringChecker = new StringChecker();

	if (command.compare("ADD") == 0)
	{
		Contact *contact = CreateContact();
		_phone_book->AddContact(contact);
	}
	else if (command.compare("SEARCH") == 0)
	{
		std::string	index_str;
		int			index;
		_phone_book->DisplayContactList();

		while (true)
		{
			std::cin >> index_str;

			if (stringChecker->IsNumber(index_str))
			{
				break ;
			}
			std::cout << "Index is not a numer, try again!" << std::endl;
		}
		std::istringstream(index_str) >> index;
		_phone_book->PrintContactAtIndex(index);
	}
	delete stringChecker;
}
