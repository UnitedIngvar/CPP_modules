#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "BuroMeta.hpp"

Intern::Intern()
{
	form_method_maps = new FormMethodMap[FORM_COUNT];

	form_method_maps[0]	= FormMethodMap("PresidentialPardonForm", &Intern::CreatePresidentialPardonForm);
	form_method_maps[1] = FormMethodMap("RobotomyRequestForm", &Intern::CreateRobotomyRequestForm);
	form_method_maps[2] = FormMethodMap("ShrubberyCreationForm", &Intern::CreateShrubberyCreationForm);
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Form	&CreatePresidentialPardonForm(std::string target)
{
	return *(new PresidentialPardonForm(target));
}

Form	&CreateRobotomyRequestForm(std::string target)
{
	return *(new RobotomyRequestForm(target));
}

Form	&CreateShrubberyCreationForm(std::string target)
{
	return *(new ShrubberyCreationForm(target));
}

Form	&Intern::MakeForm(std::string target)
{
	for (size_t i = 0; i < FORM_COUNT; i++)
	{
		if (form_method_maps[i].AppliesTo(target))
		{
			return this->*(form_method_maps[i].GetFactoryMethod())(target);
		}
	}
}

Intern	&Intern::operator=(Intern const &other)
{
	(void)other;
}

Intern::~Intern()
{

}
