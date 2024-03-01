/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:10:21 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:28:35 by psalame          ###   ########.fr       */
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
		std::string*	_functionsName;
		void			(Harl::**_functionsPointer)(void);
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif