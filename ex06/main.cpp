/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:46:29 by psalame           #+#    #+#             */
/*   Updated: 2023/12/17 22:08:18 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Harl Filter require one parameter 'level'." << std::endl;
		return (1);
	}
	else if (ac > 2)
	{
		std::cout << "Harl Filter require only one parameter 'level'." << std::endl;
		return (1);
	} 
	else
	{
		Harl harl;

		harl.complain(av[1]);
		return (0);
	}
}
