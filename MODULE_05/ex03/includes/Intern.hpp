#ifndef INTERN_HPP
# define INTERN_HPP

#include "FormMethodMap.hpp"
#include "BuroMeta.hpp"

class Intern
{
private:
	FormMethodMap	*form_method_maps[FORM_COUNT];
	Form	&CreatePresidentialPardonForm(std::string const &target);
	Form	&CreateRobotomyRequestForm(std::string const &target);
	Form	&CreateShrubberyCreationForm(std::string const &target);

public:
	Intern();
	Intern(Intern const &other);

	Form	&MakeForm(std::string const &name, std::string const &target);

	Intern	&operator=(Intern const &other);

	class FormTypeIsNotDefined : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	~Intern();
};

#endif
