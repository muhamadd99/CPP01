/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:13:27 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/21 21:52:28 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string zombieName);
	~Zombie();
	void	announce(void);
};

Zombie*	newZombie( std:: string name );
void	randomChump( std::string name );

#endif