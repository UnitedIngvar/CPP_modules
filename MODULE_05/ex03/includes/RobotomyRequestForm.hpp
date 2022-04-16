#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &other);

	RobotomyRequestForm&	operator=(RobotomyRequestForm const &other);

	void					Execute(Bureaucrat const &executor) const;

	~RobotomyRequestForm();
};

#endif
