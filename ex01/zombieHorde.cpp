/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:02:10 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 18:01:10 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;

	if (N < 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];
	for (i = 0; i < N; i++)
	{
		horde[i].set_name(name);
	}
	return (horde);
}
