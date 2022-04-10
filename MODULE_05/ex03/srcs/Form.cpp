#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
	_name("Default form"),
	_sign_grade(120),
	_execute_grade(50)
{
	_is_signed = false;
}

Form::Form(std::string const &name, int signGrade, int executeGrade) :
	_name(name),
	_sign_grade(signGrade),
	_execute_grade(executeGrade)
{
	if (executeGrade > 150 || signGrade > 150)
	{
		throw GradeTooLowException();
	}
	if (executeGrade < 1 || signGrade < 1)
	{
		throw GradeTooHighException();
	}

	_is_signed = false;
}

Form::Form(Form const &other) :
	_name(other.GetName()),
	_sign_grade(other.GetSignGrade()),
	_execute_grade(other.GetExecuteGrade())
{
	_is_signed = other._is_signed;
}

std::string const	&Form::GetName() const
{
	return _name;
}

int					Form::GetSignGrade() const
{
	return _sign_grade;
}

int					Form::GetExecuteGrade() const
{
	return _execute_grade;
}

bool				Form::GetIsSigned() const
{
	return _is_signed;
}

void				Form::BeSigned(Bureaucrat const &bureaucrat)
{
	if (_sign_grade < bureaucrat.GetGrade())
	{
		throw new GradeTooLowException;
	}

	_is_signed = true;
}

void				Form::Execute(Bureaucrat const &executor) const
{
	if (!GetIsSigned())
	{
		throw FormIsNoSignedException();
	}

	if (executor.GetGrade() > GetExecuteGrade())
	{
		throw GradeTooLowException();
	}
}

Form				&Form::operator=(Form const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_is_signed = other._is_signed;
	return *this;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low exception";
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high exception";
}

const char	*Form::FormIsNoSignedException::what() const throw()
{
	return "Form is not signed exception";
}

Form::~Form()
{

}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	std::string	isSigned = form.GetIsSigned() ? " is signed" : " is not signed";

	out << "Form " << form.GetName() << " with execute grade "
		<< form.GetExecuteGrade() << " and sign grade " << form.GetSignGrade()
		<< isSigned << std::endl;

	return out;
}
