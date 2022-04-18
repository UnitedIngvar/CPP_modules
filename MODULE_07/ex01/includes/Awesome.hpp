#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>

class Awesome
{
private:
	int _n;

public:
	Awesome(void);
	int get_n() const;
};

std::ostream &operator<<(std::ostream &o, Awesome const &a);

template<typename T>
void print(T const & x) {std::cout << x << std::endl; return; }

#endif
