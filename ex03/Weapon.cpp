/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:12:24 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 20:09:37 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( void )
{}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon( void )
{}


const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
