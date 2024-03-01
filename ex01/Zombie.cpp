/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:34:54 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:21:32 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->_Name = name;
};

Zombie::Zombie()
{
};

Zombie::~Zombie( void )
{
	std::cout << this->_Name << std::endl;
};

void	Zombie::setName(std::string name)
{
	this->_Name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
