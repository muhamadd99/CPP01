#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <LEVEL>" << std::endl;
		std::cout << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	harl.complainFiltered(level);
	return (0);
}