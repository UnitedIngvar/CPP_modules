#ifndef FORMMETHODMAP_HPP
# define FORMMETHODMAP_HPP

# include <string>
# include "Form.hpp"

class Intern;
typedef Form &(Intern::*factory_method)(std::string const &);

class FormMethodMap
{
private:
	std::string			const	_form_name;
	factory_method		const	_factory_method;

public:

	FormMethodMap();
	FormMethodMap(std::string const &formName, factory_method const &factoryMethod);
	FormMethodMap(FormMethodMap const &other);

	bool					AppliesTo(std::string request) const;
	factory_method	const	&GetFactoryMethod() const;

	FormMethodMap			&operator=(FormMethodMap const &other);

	~FormMethodMap();
};

#endif
