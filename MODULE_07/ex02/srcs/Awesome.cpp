#include "Awesome.hpp"

Awesome::Awesome(void) :
	_n(42)
{

}

int Awesome::get_n() const
{
	return _n;
}

std::ostream &operator<<(std::ostream &o, Awesome const &a)
{
	o << a.get_n();

	return o;
}
