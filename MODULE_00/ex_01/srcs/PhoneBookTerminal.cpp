#include "PhoneBookTerminal.hpp"
#include <string>
#include <iostream>

PhoneBookTerminal::PhoneBookTerminal()
{
	_phone_book = new PhoneBook();
	_string_checker = new StringChecker();
}

std::string	PhoneBookTerminal::PromptForInput(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	getline(std::cin, input);
	while (_string_checker->IsWhitespaceOrEmpty(input))
	{
		std::cout << "Field can't be empty. Try again" << std::endl;
		std::cout << prompt;
		getline(std::cin, input);
		std::cout << std::endl;
	}
	return input;
}

Contact	*PhoneBookTerminal::CreateContact()
{
	StringChecker	*stringChecker = new StringChecker();
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;

	firstName = PromptForInput("First name: ");
	lastName = PromptForInput("Last name: ");
	nickname = PromptForInput("Nickname: ");

	while (true)
	{
		phoneNumber = PromptForInput("Phone number: ");

		if (stringChecker->IsPhoneNumber(phoneNumber))
		{
			break ;
		}
		std::cout << "Not a phone number. Please, Try again." << std::endl;
	}

	darkestSecret = PromptForInput("The darkest secret: ");
	delete stringChecker;
	return new Contact(firstName,
				lastName,
				nickname,
				phoneNumber,
				darkestSecret);
}

bool	PhoneBookTerminal::ProcessAdd()
{
	Contact *contact = CreateContact();
	_phone_book->AddContact(contact);
	return false;
}

bool	PhoneBookTerminal::ProcessSearch()
{
	int			index = 0;

		if (_phone_book->IsEmpty())
		{
			std::cout << "Nothing to show yet. Add a contact!" << std::endl;
			return false;
		}

		std::cout << "Please, enter any index from the table below to show conatct info: " << std::endl;
		_phone_book->DisplayContactList();
		while (true)
		{
			std::string	index_str;

			getline(std::cin, index_str);
			if (!_string_checker->IsNumber(index_str))
			{
				std::cout << "Index is not a number, try again!" << std::endl;
				continue ;
			}

			sscanf(index_str.c_str(), "%d", &index);
			if (!_phone_book->PrintContactAtIndex(index))
			{
				std::cout << "Wrong index! Try again!" << std::endl;
				continue ;
			}
			break;
		}
		return false;
}

bool	PhoneBookTerminal::ProcessCommand(std::string command)
{
	if (command.compare("ADD") == 0)
	{
		return ProcessAdd();
	}
	else if (command.compare("SEARCH") == 0)
	{
		return ProcessSearch();
	}
	else if (command.compare("EXIT") == 0)
	{
		return true;
	}

	std::cout << "Wrong command. Try again." << std::endl;
	return false;
}

void	PhoneBookTerminal::StartTerminal()
{
	bool			exitIsCommanded = false;

	while (!exitIsCommanded)
	{
		std::string		command;

		std::cout << "Please, enter a command [ADD, SEARCH, EXIT]: ";
		getline(std::cin, command);
		std::cout << std::endl;
		exitIsCommanded = ProcessCommand(command);
	}

	return;
}
