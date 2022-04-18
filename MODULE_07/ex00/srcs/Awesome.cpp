#include "Awesome.hpp"

Awesome::Awesome(void) : _n(0)
{

}

Awesome::Awesome( int n ) : _n( n )
{

}

Awesome &Awesome::operator= (Awesome & a)
{
	_n = a._n; return *this;
}
bool Awesome::operator==( Awesome const & rhs ) const
{
	return (this->_n == rhs._n);
}
bool Awesome::operator!=( Awesome const & rhs ) const
{
	return (this->_n != rhs._n);
}

bool Awesome::operator>( Awesome const & rhs ) const
{
	return (this->_n > rhs._n);
}

bool Awesome::operator<( Awesome const & rhs ) const
{
	return (this->_n < rhs._n);
}

bool Awesome::operator>=( Awesome const & rhs ) const
{
	return (this->_n >= rhs._n);
}

bool Awesome::operator<=( Awesome const & rhs ) const
{
	return (this->_n <= rhs._n);
}

int Awesome::get_n() const
{
	return _n;
}

std::ostream &operator<<(std::ostream &out, Awesome const &a)
{
	out << "n: " << a.get_n();
	return out;
}
