#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	int			const	_sign_grade;
	int			const	_execute_grade;
	bool				_is_signed;

public:
	Form();
	Form(Form const &other);
	Form(std::string const &name, int signGrade, int executeGrade);

	std::string const	&GetName() const;
	int					GetSignGrade() const;
	int					GetExecuteGrade() const;
	bool				GetIsSigned() const;
	void				BeSigned(Bureaucrat const &bureaucrat);
	virtual void		Execute(Bureaucrat const &executor) const = 0;

	Form				&operator=(Form const &other);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class FormIsNoSignedException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	virtual ~Form() = 0;
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif
