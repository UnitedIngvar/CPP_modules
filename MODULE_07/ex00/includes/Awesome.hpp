#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>

class Awesome
{
private:
	int _n;

public:
	Awesome(void);
	Awesome( int n );
	Awesome & operator= (Awesome & a);
	bool operator==( Awesome const & rhs ) const;
	bool operator!=( Awesome const & rhs ) const;
	bool operator>( Awesome const & rhs ) const;
	bool operator<( Awesome const & rhs ) const;
	bool operator>=( Awesome const & rhs ) const;
	bool operator<=( Awesome const & rhs ) const;
	int get_n() const;
};

std::ostream &operator<<(std::ostream &o, Awesome const &a);

#endif
