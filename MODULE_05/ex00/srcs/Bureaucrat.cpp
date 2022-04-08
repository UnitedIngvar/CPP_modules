#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat() : _name("Undefined"), _grade(150)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other.GetName())
{
	*this = other;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
}

std::string const	&Bureaucrat::GetName() const
{
	return _name;
}

int					Bureaucrat::GetGrade() const
{
	return _grade;
}

void				Bureaucrat::Increase()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		_grade--;
		std::cout << *this << " bureuacrat grade is " << _grade <<std::endl;
	}
}

void				Bureaucrat::Decrease()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		_grade++;
		std::cout << *this << " bureuacrat grade is " << _grade <<std::endl;
	}
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_grade = other.GetGrade();
}

class GradeTooHighException: public std::exception
{
public:
	virtual const char	*what() const throw();
};

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low exception";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high exception";
}

Bureaucrat::~Bureaucrat()
{

}
