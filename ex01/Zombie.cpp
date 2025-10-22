/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:07:22 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/22 15:22:56 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream> //cout cin

Zombie::Zombie() : name("Unnamed")
{
	std::cout << "Default zombie created: " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string newName)
{
	if (name != newName)
	{
		std::cout << "Renaming zombie from '" << name << "' to '" << newName << "'" << std::endl;
		name = newName;
	}
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
