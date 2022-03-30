#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	_loglevel_funcs = new loglevel_func[4];
	_loglevel_names = new std::string[4];

	_loglevel_names[0] = "DEBUG";
	_loglevel_names[1] = "INFO";
	_loglevel_names[2] = "WARNING";
	_loglevel_names[3] = "ERROR";

	_loglevel_funcs[0] = &Harl::Debug;
	_loglevel_funcs[1] = &Harl::Info;
	_loglevel_funcs[2] = &Harl::Warning;
	_loglevel_funcs[3] = &Harl::Error;
}

void	Harl::Debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger."
	<< " I really do!" << std::endl;
}

void	Harl::Info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::Warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::Error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::Complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_loglevel_names[i].compare(level) == 0)
		{
			(this->*_loglevel_funcs[i])();
			return;
		}
	}

	std::cout << "Level is not found." << std::endl;
}

Harl::~Harl()
{
	delete[] _loglevel_funcs;
	delete[] _loglevel_names;
}
