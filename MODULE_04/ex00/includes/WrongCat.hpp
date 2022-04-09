#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &other);

	void	MakeSound(void) const;

	WrongCat		&operator=(WrongCat const &other);

	~WrongCat();
};

#endif
