#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;

public:
	Dog();
	Dog(Dog const &other);

	void	MakeSound(void) const;

	Dog	&operator=(Dog const &other);

	~Dog();
};

#endif
