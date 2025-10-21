/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:15:23 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/21 23:31:42 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	std::cout << "=== Testing rrandomChump (stack) ===" << std::endl;
	randomChump("StackZombie");

	std::cout << std::endl;

	std::cout << "=== Testing newZombie (heap) ===" << std::endl;
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce(); //does this line mean to show it can be use outside of the function we created it?
	delete heapZombie;

	std::cout << std::endl;
	
	Zombie directZombie("DirectZombie");
	directZombie.announce();

	return (0);
}