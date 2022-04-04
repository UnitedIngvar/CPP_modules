#ifndef HARL_HPP
# define HARL_HPP
# include <string>

class Harl
{
	private:
	typedef void (Harl::*loglevel_func)(void);

	void			Debug(void);
	void			Info(void);
	void			Warning(void);
	void			Error(void);
	loglevel_func	*_loglevel_funcs;
	std::string		*_loglevel_names;

	public:
	Harl();

	void	Complain(std::string level);

	~Harl();
};
