#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

void	CatchForm(std::string const &name, int signGrade, int executeGrade)
{
	try
	{
		Form bur(name, signGrade, executeGrade);
	}
	catch (const std::exception &exception)
	{
		std::cerr << "Form " << name << " was cought because : ";
		std::cerr << exception.what() << std::endl;
		return;
	}

	std::cout << "Form " << name << " has nothing to be caught for!" << std::endl;
}

void	TryToSignForm(Form &form, Bureaucrat const &bureaucrat)
{
	bureaucrat.SignForm(form);
}

void	PrintForm(Form const &form)
{
	std::cout << form;
}

int	main(void)
{
	CatchForm("C32M", 151, 120);
	CatchForm("C32C", 120, 151);
	CatchForm("C32F", 120, 120);

	Form formOne = Form("C33A", 100, 50);
	Bureaucrat bureaucratOne = Bureaucrat("Carl", 120);

	Form formTwo = Form("M44B", 100, 50);
	Bureaucrat bureaucratTwo =  Bureaucrat("Mary", 100);

	Form formThree = Form("M3453636H", 100, 50);
	Bureaucrat bureaucratThree =  Bureaucrat("Harry", 50);

	TryToSignForm(formOne, bureaucratOne);
	TryToSignForm(formTwo, bureaucratTwo);
	TryToSignForm(formThree, bureaucratThree);
	PrintForm(formOne);
	PrintForm(formThree);
	PrintForm(formTwo);
}
