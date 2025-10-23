#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		getLevelValue(std::string level);

public:
	void	complainFiltered(std::string level);
};

#endif