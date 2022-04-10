#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45),
	_target("RobotomyFile")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	Form(other.GetName(), 72, 45)
{
	*this = other;
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
