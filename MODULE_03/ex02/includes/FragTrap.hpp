#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);

	void			HighFiveGuys(void);

	FragTrap		&operator=(FragTrap const &other);

	~FragTrap(void);
};

#endif
