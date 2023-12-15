/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:43:14 by psalame           #+#    #+#             */
/*   Updated: 2023/12/15 19:00:03 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << &str << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	// std::cout << std::endl;
	// stringREF = "HI THIS IS BRAIN UPDATED";

	// std::cout << str << std::endl;
	// std::cout << stringPTR << std::endl;
	// std::cout << stringREF << std::endl;
	return (0);
}