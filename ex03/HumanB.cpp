/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:28:50 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:26:02 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_Name = name;
	this->_Weapon = NULL;
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void )
{
	std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

