/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:30:17 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 17:49:44 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		Zombie( void );
		~Zombie( void );
		
		void	set_name(std::string name);
		void	announce( void );

	private:
		std::string name;
};

#endif
