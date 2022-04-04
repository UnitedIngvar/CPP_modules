#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie();

	void	Announce(void);
	void	SetName(std::string name);
	~Zombie();
};

#endif
