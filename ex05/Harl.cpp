/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:28:38 by psalame           #+#    #+#             */
/*   Updated: 2024/03/01 14:30:33 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#define COLOR_RESET "\033[0m"
#define COLOR_DEBUG "\033[0;34m"
#define COLOR_INFO "\033[0m"
#define COLOR_WARNING "\033[0;93m"
#define COLOR_ERROR "\033[1;91m"
typedef void (Harl::*t_Harl_pmf)(void);

Harl::Harl( void )
{
	this->_functionsName = new std::string[4];
	this->_functionsName[0] = "DEBUG";
	this->_functionsName[1] = "INFO";
	this->_functionsName[2] = "WARNING";
	this->_functionsName[3] = "ERROR";

	this->_functionsPointer = new t_Harl_pmf[4];
	this->_functionsPointer[0] = &Harl::_debug;
	this->_functionsPointer[1] = &Harl::_info;
	this->_functionsPointer[2] = &Harl::_warning;
	this->_functionsPointer[3] = &Harl::_error;
}

Harl::~Harl( void )
{
	delete[] this->_functionsName;
	delete[] this->_functionsPointer;
}

void	Harl::complain( std::string level )
{
	int			i;
	t_Harl_pmf	fct;

	for (i = 0; i < 4; i++)
	{
		if (level == this->_functionsName[i])
		{
			fct = _functionsPointer[i];
			(this->*fct)();
			break;
		}
	}
}

// private

void	Harl::_debug( void )
{
	std::cout << COLOR_DEBUG;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::_info( void )
{
	std::cout << COLOR_INFO;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << COLOR_WARNING;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::_error( void )
{
	std::cout << COLOR_ERROR;
	std::cout << "This is unacceptable! I want to speak to the manager now";
	std::cout << COLOR_RESET << std::endl;
}