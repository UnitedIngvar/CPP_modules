#include "PhoneBookTerminal.hpp"
#include "Contact.hpp"
#include "StringChecker.hpp"
#include <string>
#include <iostream>

PhoneBookTerminal::PhoneBookTerminal()
{
	_phone_book = new PhoneBook();
}

std::string	PhoneBookTerminal::PromptForInput(std::string prompt)
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

bool	PhoneBookTerminal::ProcessCommand(std::string )
{

}

void	PhoneBookTerminal::StartTerminal()
{
	StringChecker	*stringChecker = new StringChecker();
	std::string		command;

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

			if (!stringChecker->IsNumber(index_str))
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
	}
	delete stringChecker;
}
