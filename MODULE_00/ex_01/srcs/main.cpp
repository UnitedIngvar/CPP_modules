#include "PhoneBookTerminal.hpp"
#include <iostream>

int	main(void)
{
	PhoneBookTerminal *terminal = new PhoneBookTerminal();

	terminal->StartTerminal();
	delete terminal;
}
