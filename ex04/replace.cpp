/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:54:28 by psalame           #+#    #+#             */
/*   Updated: 2024/02/08 15:59:54 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

bool	file_replace(std::string filename, std::string src, std::string dest)
{
	std::ifstream	file_from; 
	std::ofstream	file_to; 
	char			chr;
	std::string		str = "";
	size_t			pos;

	file_from.open(filename.c_str(), std::ios_base::in);
	if (!file_from.is_open())
	{
		std::cerr << "Error infile: " << strerror(errno) << std::endl;
		return (false);
	}
	file_to.open((filename + ".replace").c_str(), std::ios_base::out | std::ios_base::trunc);
	if (!file_from.is_open())
	{
		std::cerr << "Error outfile: " << strerror(errno) << std::endl;
		file_from.close();
		return (false);
	}
	while (file_from.good())
	{
		file_from.get(chr);
		if (file_from.good())
			str += chr;
	}

	pos = str.find(src);
	while (pos != std::string::npos)
	{
		str.replace(pos, src.size(), dest);
		pos = str.find(src, pos + dest.size());
	}

	file_to << str;
	file_from.close();
	file_to.close();
	return (true);
}
