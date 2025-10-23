#include "Harl.hpp"
#include <iostream>


void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my" <<
		"7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl; 
	std::cout << "INFO: I cannot believe adding extra bacon" << 
	"costs more money. You didn't put enough bacon in my burger!" <<
	" If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING: I think I deserve to have some extra bacon for free."
	<< " I’ve been coming foryears whereas you started" <<
	"working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR: This is unacceptable!" <<
	"I want to speak to the manager now." << std::endl;
}

int	Harl::getLevelValue(std::string level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (4);
}

void	Harl::complainFiltered(std::string level)
{
	int levelValue = getLevelValue(level);

	switch (levelValue)
	{
		case 0:
			debug();
			// fall through
		case 1:
			info();
			// fall through
		case 2:
			warning();
			// fall through 
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}