/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:18:52 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 20:05:12 by psalame          ###   ########.fr       */
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
		std::string name;
		Weapon& weapon;
};

#endif