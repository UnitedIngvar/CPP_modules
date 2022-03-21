#include "includes/PhoneBook.hpp"

int	main(void)
{
	std::string	command;

	while (true)
	{
		std::cout << "Type a command [ADD, SEARCH]: "; // Type a number and press enter
		std::cin >> command; // Get user input from the keyboard
		if (command.compare("ADD") == 0)
		{
			PhoneBook->AddContact();
		}
	}
}
