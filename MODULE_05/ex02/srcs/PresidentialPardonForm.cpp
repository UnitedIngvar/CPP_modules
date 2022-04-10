#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5),
	_target("Somebody")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	Form(other.GetName(), 25, 5)
{
	*this = other;
}

void					PresidentialPardonForm::Execute(Bureaucrat const &executor) const
{
	this->Form::Execute(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
