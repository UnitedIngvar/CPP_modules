#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	std::string	level;
	Harl		*harl = new Harl;

	std::cout << "Please, provide a level: ";
	if (getline(std::cin, level).eof())
	{
		std::cout << std::endl << "Whoops, eof detected! Leaving!" << std::endl;
		return 0;
	}
	harl->Complain(level);
	delete harl;
	system("leaks Harl_filter | grep 'leaks for'");
}
