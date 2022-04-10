#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45),
	_target("RobotomyFile")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form(target, 72, 45),
	_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
	Form(copy._target, 72, 45)
{
	*this = copy;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
	if (this == &form)
	{
		return *this;
	}

	this->_target = form._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void					RobotomyRequestForm::Execute(Bureaucrat const &executor) const
{
	this->Form::Execute(executor);

	std::cout << "Makes some drilling noises." << std::endl;
	if (std::rand() % 2 == 0)
	{
		std::cout << _target << " has been robotomized successfully." << std::endl;
		return;
	}

	std::cout << "The Robotomy is failed" << std::endl;
	return;
}
