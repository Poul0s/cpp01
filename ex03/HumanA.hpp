/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:18:52 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:23:02 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP
# include "Weapon.hpp"
# include <iostream>

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA( void );
		void	attack( void );

	private:
		std::string _Name;
		Weapon& _Weapon;
};

#endif