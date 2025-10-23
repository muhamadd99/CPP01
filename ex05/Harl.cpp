/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:42:02 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/23 14:06:37 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my" <<
		"7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon" << 
	"costs more money. You didn't put enough bacon in my burger!" <<
	" If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free."
	<< " I’ve been coming foryears whereas you started" <<
	"working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable!" <<
	"I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*functions[4])(void) = 
	{
		&Harl::debug, &Harl::info,
		&Harl::warning, &Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
}
