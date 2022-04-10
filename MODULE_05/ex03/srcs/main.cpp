#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	PardonTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);
	PresidentialPardonForm	pardon;

	std::cout << "-------------PardonTest---------------"
		<< std::endl << std::endl;

	boss.ExecuteForm(pardon);
	broke.ExecuteForm(pardon);
	broke.SignForm(pardon);
	boss.SignForm(pardon);
	broke.ExecuteForm(pardon);
	boss.ExecuteForm(pardon);

	std::cout << std::endl << "-------------PardonTest---------------"
		<< std::endl << std::endl;
}

void	ShrubberyTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);
	ShrubberyCreationForm	shrubbery;

	std::cout << "-------------ShrubberyTest---------------"
		<< std::endl << std::endl;

	boss.ExecuteForm(shrubbery);
	broke.ExecuteForm(shrubbery);
	broke.SignForm(shrubbery);
	boss.SignForm(shrubbery);
	broke.ExecuteForm(shrubbery);
	boss.ExecuteForm(shrubbery);

	std::cout << std::endl << "-------------ShrubberyTest---------------"
		<< std::endl << std::endl;
}


void	RobotomyTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);
	RobotomyRequestForm		robo;

	std::cout << "-------------RobotomyTest---------------"
		<< std::endl << std::endl;

	boss.ExecuteForm(robo);
	broke.ExecuteForm(robo);
	broke.SignForm(robo);
	boss.SignForm(robo);
	broke.ExecuteForm(robo);
	boss.ExecuteForm(robo);

	std::cout << std::endl << "-------------RobotomyTest---------------"
		<< std::endl << std::endl;
}

int		main(void)
{
	//Form abstract;

	PardonTest();
	ShrubberyTest();
	RobotomyTest();
	return (0);
}
