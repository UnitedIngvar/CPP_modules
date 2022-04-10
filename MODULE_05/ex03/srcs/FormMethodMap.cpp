#include "FormMethodMap.hpp"

FormMethodMap::FormMethodMap() :
	_form_name("Undefined"),
	_factory_method(NULL)
{

}

FormMethodMap::FormMethodMap(std::string const &formName, factory_method const factoryMethod) :
	_form_name(formName),
	_factory_method(factoryMethod)
{

}

FormMethodMap::FormMethodMap(FormMethodMap const &other) :
	_form_name(other._form_name),
	_factory_method(other._factory_method)
{

}

bool						FormMethodMap::AppliesTo(std::string request) const
{

}

factory_method				FormMethodMap::GetFactoryMethod() const
{
	return _factory_method;
}

FormMethodMap	&FormMethodMap::operator=(FormMethodMap const &other)
{

}

~FormMethodMap()
{

}
