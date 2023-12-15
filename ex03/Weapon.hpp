/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:09:21 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 19:25:02 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		Weapon( void );
		Weapon(std::string type);
		~Weapon( void );
		
		const std::string&	getType( void );
		void				setType( std::string type );
	
	private:
		std::string	type;
};

#endif
