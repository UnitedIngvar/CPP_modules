#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	PardonTest()
{
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------PardonTest---------------"
		<< std::endl << std::endl;

	Form &pardon = intern.MakeForm("PresidentialPardonForm", "Zurkerberg");
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
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------ShrubberyTest---------------"
		<< std::endl << std::endl;

	Form &shrubbery = intern.MakeForm("ShrubberyCreationForm", "Shrub");
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
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------RobotomyTest---------------"
		<< std::endl << std::endl;

	Form &robo = intern.MakeForm("RobotomyRequestForm", "Mark");
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
	PardonTest();
	ShrubberyTest();
	RobotomyTest();
	return (0);
}
