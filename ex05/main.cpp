/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:58:28 by psalame           #+#    #+#             */
/*   Updated: 2023/12/17 14:28:17 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	int		i;

	if (ac == 1)
	{
		std::cout << "Possible arguments : 'DEBUG', 'INFO', 'WARNING', 'ERROR'. Exemple :" << std::endl;
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
	}
	else
	{
		i = 1;
		while (i < ac)
			harl.complain(av[i++]);
	}
	return (0);
}
