/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:46 by psalame           #+#    #+#             */
/*   Updated: 2024/03/08 19:31:57 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	file_replace(std::string filename, std::string src, std::string dest);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Program require 3 arguments : 'filename', 'src', 'dest'." << std::endl;
		return (1);
	}
	else
	{
		try
		{
			if (file_replace(av[1], av[2], av[3]))
				return (0);
			else
				return (1);
		}
		catch (const std::invalid_argument& e)
		{
			std::cerr << e.what();
			return (1);
		}
	}
}