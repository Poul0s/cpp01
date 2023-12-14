/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:50:19 by psalame           #+#    #+#             */
/*   Updated: 2023/12/14 23:02:05 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int	main(void)
{
	// Allocate on stack exemple
	std::cout << "// It's better to call zombie on stack when their announce are only called one time" << std::endl;
	std::cout << "<Player 1 entered the room>" << std::endl;
	randomChump("Zombie 1");
	randomChump("Zombie 2");
	randomChump("Zombie 3");

	std::cout << std::endl;
	// Allocate on heap exemple
	std::cout << "// It's better to call zombie on heap when their announce are called multiple times" << std::endl;
	Zombie	*Zombie1 = newZombie("Zombie 1");
	std::cout << "<Zombie 1 felt from his sleeping rock>" << std::endl;
	Zombie1->announce();
	randomChump("Zombie 2");
	randomChump("Zombie 3");
	std::cout << "<Zombie 1 surprised himself from zombie 2 and 3 announcement>" << std::endl;
	Zombie1->announce();
	delete Zombie1;
}