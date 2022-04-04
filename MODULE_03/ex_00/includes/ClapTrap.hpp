#include <string>

class ClapTrap
{
	private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);

	ClapTrap	&operator=(const ClapTrap &other);

	void		Attack(std::string const &target);
	void		TakeDamage(unsigned int amount);
	void		BeRepaired(unsigned int amount);

	~ClapTrap();
};
