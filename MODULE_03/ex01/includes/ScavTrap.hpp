#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &other);
	ScavTrap(std::string const &name);

	void	GuardGate();
	void	Attack(std::string const &target);
};

#endif
