/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:34:43 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/23 17:28:25 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nameP) : name(nameP)//, weapon(NULL)
{
	
}

// // Would still be okay since pointer can be NULL
// HumanB::HumanB(std::string nameP, std::string* weaponP)
// {
// 	name = nameP;
// 	weapon = weaponP;
// }

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack() 
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon! " << std::endl;
}