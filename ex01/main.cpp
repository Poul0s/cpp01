/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:05:13 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 18:06:15 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	ft_stoi(std::string str)
{
	size_t	i;
	int		sign;
	int		res;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	std::string	name = "Zombie";
	std::string	nbZombiesStr = "5";
	int	nbZombies;
	int	i;
	Zombie	*horde;

	std::cout << "Enter zombies names : ";
	std::getline(std::cin, name);
	
	std::cout << "Enter zombies number : ";
	std::getline(std::cin, nbZombiesStr);
	nbZombies = ft_stoi(nbZombiesStr);

	horde = zombieHorde(nbZombies, name);
	i = 0;
	if (horde == NULL)
		std::cout << "Alloc error" << std::endl;
	else
	{
		while (i < nbZombies + 2)
		{
			try
			{
				if (i >= (sizeof(horde) / sizeof(Zombie)))
					throw std::out_of_range ("no more zombies in horde");
				horde[1000].announce();
			}
			catch (const std::out_of_range& e)
			{
				std::cout << "Out of range !" << std::endl;
			}
			i++;
		}
	}
}