#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	bool			EnsureCanAct(void) const;

	public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &other);
	ClapTrap(std::string const &name);

	void			Attack(std::string const &target);
	void			TakeDamage(unsigned int amount);
	void			BeRepaired(unsigned int amount);

	ClapTrap		&operator=(ClapTrap const &other);

	~ClapTrap(void);
};

#endif
