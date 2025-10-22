/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:44:28 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/22 13:17:04 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream> //cin cout
#include <iomanip>
//create a string variable with "HI this is Brain"
//std::string *stringptr = string variable
//std::string &stringREF = string variable
// std::cout << &string
// std::cout << &stringPTR
// std::cout << &stringREF
// std::cout << string
// std::cout << stringptr
// std::cout << stringREF

int main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;
	//print memory address
	std::cout << "=====Memory address test=====" << std::endl;
	std::cout << std::left << std::setw(20) << "Original brain: " << &brain << std::endl;
	std::cout << std::left << std::setw(20) <<  "Pointer to brain: " << &stringPTR << std::endl;
	std::cout << std::left << std::setw(20) <<  "Reference to brain: " << &stringREF << std::endl;
	//print value
	std::cout << "=====The value test=====" << std::endl;
	std::cout << std::left << std::setw(20) <<  "Original brain :" << brain << std::endl;
	std::cout << std::left << std::setw(20) <<  "Pointer to brain :" << *stringPTR << std::endl;
	std::cout << std::left << std::setw(20) <<  "Reference to brain: " << stringREF << std::endl;
}