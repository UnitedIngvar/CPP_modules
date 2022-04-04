#include <string>

class ClapTrap
{
	private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &other);
	ClapTrap(std::string const &name);

	ClapTrap	&operator=(ClapTrap const &other);

	void		Attack(std::string const &target) const;
	void		TakeDamage(unsigned int amount);
	void		BeRepaired(unsigned int amount);

	~ClapTrap();
};
