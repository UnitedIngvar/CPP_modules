#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &other);

	void	MakeSound(void) const;

	Dog		&operator=(Dog const &other);

	~Dog();
};

#endif
