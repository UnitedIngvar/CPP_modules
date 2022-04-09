#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat(std::string const &name, int grade);

	std::string const	&GetName() const;
	int					GetGrade() const;
	void				SignForm(Form &form) const;
	void				Increase();
	void				Decrease();

	Bureaucrat	&operator=(Bureaucrat const &other);

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

	~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureuacrat);

#endif
