#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string	_type;

public:
	Animal();
	Animal(Animal const &other);

	std::string	const	&GetType(void) const;
	virtual void		MakeSound(void) const = 0;

	Animal	&operator=(Animal const &other);

	virtual ~Animal() = 0;
};

#endif
