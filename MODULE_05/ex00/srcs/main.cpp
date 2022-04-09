#include "Bureaucrat.hpp"
#include <string>

void	CatchBureaucrat(std::string const &name, int grade)
{
	try
	{
		Bureaucrat bur(name, grade);
	}
	catch (const std::exception &exception)
	{
		std::cerr << "Bureaucrat " << name << " was cought because : ";
		std::cerr << exception.what() << std::endl;
		return;
	}

	std::cout << "Bureaucrat " << name << " has nothing to be caught for!" << std::endl;
}

void	IncreaseThemTooHigh()
{
	Bureaucrat	karen("Karen", 5);

	try
	{
		while (true)
		{
			karen.Increase();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	DecreaseThemTooLow()
{
	Bureaucrat	karen("Charley", 145);

	try
	{
		while(true)
		{
			karen.Decrease();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(void)
{
	CatchBureaucrat("Alexey", 151);
	CatchBureaucrat("Varya", 0);
	CatchBureaucrat("Robert", 34);
	IncreaseThemTooHigh();
	DecreaseThemTooLow();
}
