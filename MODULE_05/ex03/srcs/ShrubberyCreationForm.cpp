#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137),
	_target("ShrubberyFile")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	Form(other.GetName(), 145, 137),
	_target(other._target)
{
	*this = other;
}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_target = other._target;
	return *this;
}

void					ShrubberyCreationForm::Execute(Bureaucrat const &executor) const
{
	this->Form::Execute(executor);

	std::string tree;
	tree = "\
				&&& &&  & &&\n\
			 && &\\/& ()|/ @, &&\n\
	 	  &\\/(/&/&||/& /_/)_&/_&\n\
		 &() &\\/&|()|/&\\/ '%' & ()\n\
		&_\\_&&_\\|& |&&/&__%_/_& &&\n\
 	  &&   && & &| &| /& & % ()& /&&\n\
		()&_---()&\\&\\|&&-&&--%---()~\n\
			  &&   \\|||\n\
					|||\n\
					|||\n\
					|||\n\
					|||\n";

	std::ofstream file(_target + "_shrubbery");
	if (!file.good())
	{
		std::cerr << "File " << _target << "_shrubbery"
			<< " could not be opened or created. Leaving!"
			<< std::endl;
		file.clear();
		return;
	}

	file << tree;
	file.close();
	std::cout << "File '" << _target << "_shrubbery' was created" << std::endl;
	return;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
