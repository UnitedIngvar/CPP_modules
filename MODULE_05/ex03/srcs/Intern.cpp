#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "BuroMeta.hpp"

Intern::Intern()
{
	form_method_maps[0] = new FormMethodMap("PresidentialPardonForm", &Intern::CreatePresidentialPardonForm);
	form_method_maps[1] = new FormMethodMap("RobotomyRequestForm", &Intern::CreateRobotomyRequestForm);
	form_method_maps[2] = new FormMethodMap("ShrubberyCreationForm", &Intern::CreateShrubberyCreationForm);
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Form		&Intern::CreatePresidentialPardonForm(std::string const &target)
{
	return *(new PresidentialPardonForm(target));
}

Form		&Intern::CreateRobotomyRequestForm(std::string const &target)
{
	return *(new RobotomyRequestForm(target));
}

Form		&Intern::CreateShrubberyCreationForm(std::string const &target)
{
	return *(new ShrubberyCreationForm(target));
}

Form		&Intern::MakeForm(std::string const &name, std::string const &target)
{
	for (size_t i = 0; i < FORM_COUNT; i++)
	{
		if (form_method_maps[i]->AppliesTo(name))
		{
			factory_method method =
				form_method_maps[i]->GetFactoryMethod();

			std::cout << method << std::endl;

			Form &form = (this->*method)(target);
			std::cout << "Intern creates " << form << std::endl;
			return form;
		}
	}

	throw FormTypeIsNotDefined();
}

Intern		&Intern::operator=(Intern const &other)
{
	(void)other;

	return *this;
}

const char	*Intern::FormTypeIsNotDefined::what() const throw()
{
	return "Form type is not defined exception";
}

Intern::~Intern()
{
	for (size_t i = 0; i < FORM_COUNT; i++)
	{
		delete form_method_maps[i];
	}
}
