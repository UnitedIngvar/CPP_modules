#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);

	std::string const	&GetType(void) const;
	void		MakeSound(void) const;

	WrongAnimal				&operator=(WrongAnimal const &other);

	~WrongAnimal();
};

#endif
