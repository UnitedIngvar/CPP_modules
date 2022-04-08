#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &other);

	void	MakeSound(void) const;

	Cat	&operator=(Cat const &other);

	~Cat();
};

#endif
