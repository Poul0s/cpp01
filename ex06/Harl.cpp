/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:28:38 by psalame           #+#    #+#             */
/*   Updated: 2023/12/17 22:06:23 by psalame          ###   ########.fr       */
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
	this->functions_name = new std::string[4];
	this->functions_name[0] = "DEBUG";
	this->functions_name[1] = "INFO";
	this->functions_name[2] = "WARNING";
	this->functions_name[3] = "ERROR";

	this->functions_pointer = new t_Harl_pmf[4];
	this->functions_pointer[0] = &Harl::debug;
	this->functions_pointer[1] = &Harl::info;
	this->functions_pointer[2] = &Harl::warning;
	this->functions_pointer[3] = &Harl::error;
}

Harl::~Harl( void )
{
	delete[] this->functions_name;
	delete[] this->functions_pointer;
}

void	Harl::complain( std::string level )
{
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == this->functions_name[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*(functions_pointer[0]))();
			__attribute__ ((fallthrough));
		case 1:
			(this->*(functions_pointer[1]))();
			__attribute__ ((fallthrough));
		case 2:
			(this->*(functions_pointer[2]))();
			__attribute__ ((fallthrough));
		case 3:
			(this->*(functions_pointer[3]))();
		break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

// private

void	Harl::debug( void )
{
	std::cout << COLOR_DEBUG;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::info( void )
{
	std::cout << COLOR_INFO;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::warning( void )
{
	std::cout << COLOR_WARNING;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std::cout << COLOR_RESET << std::endl;
}

void	Harl::error( void )
{
	std::cout << COLOR_ERROR;
	std::cout << "This is unacceptable! I want to speak to the manager now";
	std::cout << COLOR_RESET << std::endl;
}
