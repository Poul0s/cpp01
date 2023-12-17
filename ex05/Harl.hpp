/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:10:21 by psalame           #+#    #+#             */
/*   Updated: 2023/12/17 14:09:29 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level);

	private:
		std::string*	functions_name;
		void			(Harl::**functions_pointer)(void); // https://websites.umich.edu/~eecs381/handouts/Pointers_to_memberfuncs.pdf 
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif