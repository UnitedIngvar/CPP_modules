#ifndef INTERN_HPP
# define INTERN_HPP

#include "FormMethodMap.hpp"

class Intern
{
private:
	FormMethodMap	*form_method_maps;

	Form	&CreatePresidentialPardonForm(std::string target);
	Form	&CreateRobotomyRequestForm(std::string target);
	Form	&CreateShrubberyCreationForm(std::string target);

public:
	Intern();
	Intern(Intern const &other);

	Form	&MakeForm(std::string target);

	Intern	&operator=(Intern const &other);

	~Intern();
};

#endif
