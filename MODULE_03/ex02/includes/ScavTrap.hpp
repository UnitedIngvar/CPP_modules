#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &other);
	ScavTrap(std::string const &name);

	void			GuardGate(void);
	void			Attack(std::string const &target);

	ScavTrap		&operator=(ScavTrap const &other);

	~ScavTrap(void);
};

#endif
