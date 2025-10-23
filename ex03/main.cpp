/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/23 16:32:59 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
}

// #include <iostream>

// int main()
// {
//     {
//         // Test HumanA (Reference) - CANNOT change weapon
//         Weapon clubA = Weapon("crude spiked club");
//         Weapon swordA = Weapon("sharp sword");
        
//         HumanA bob("Bob", clubA);  // Bob is FOREVER bound to clubA
//         bob.attack();  // "Bob attacks with their crude spiked club"
        
//         // bob = HumanA("Bob", swordA);  // Would need to create new object!
//         // CANNOT change Bob's weapon - reference is fixed!
        
//         clubA.setType("broken club");  // Only way to "change" Bob's weapon
//         bob.attack();  // "Bob attacks with their broken club"
//     }
    
// 	std::cout << "\nPointer case" << std::endl;
	
//     {
//         // Test HumanB (Pointer) - CAN change weapon
//         Weapon clubB = Weapon("crude spiked club");
//         Weapon swordB = Weapon("sharp sword");
        
//         HumanB jim("Jim");
//         jim.setWeapon(clubB);  // Jim points to clubB
//         jim.attack();  // "Jim attacks with their crude spiked club"
        
//         jim.setWeapon(swordB);  // Jim can NOW point to swordB! 🎯
//         jim.attack();  // "Jim attacks with their sharp sword"
        
//         clubB.setType("magic club");  // Jim doesn't care - he has sword now!
//         jim.attack();  // "Jim attacks with their sharp sword" (unchanged)
//     }
    
//     return 0;
// }

// #include <string>
// #include <iostream>

// int	main()
// {
// 	int a = 10;
// 	int& b = a;
	
// 	b = 20;
// 	std::cout << a << std::endl;
// }