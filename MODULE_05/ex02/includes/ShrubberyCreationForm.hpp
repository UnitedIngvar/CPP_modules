#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);

	void					Execute(Bureaucrat const &bureaucrat) const;

	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &other);

	~ShrubberyCreationForm();
};

#endif
