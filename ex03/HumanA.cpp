/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:21:45 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:26:41 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _Weapon(weapon)
{
	this->_Name = name;
	this->_Weapon = weapon;
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void )
{
	std::cout << this->_Name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
