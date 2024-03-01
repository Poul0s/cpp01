/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:27:48 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:25:38 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CPP
# define HUMAN_B_CPP
# include "Weapon.hpp"
# include <iostream>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB( void );
		void	setWeapon(Weapon &weapon);
		void	attack( void );

	private:
		std::string _Name;
		Weapon *_Weapon;
};

#endif