#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &other);

	void					Execute(Bureaucrat const &executor) const;

	~PresidentialPardonForm();
};




#endif
