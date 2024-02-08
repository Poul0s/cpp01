/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:54:28 by psalame           #+#    #+#             */
/*   Updated: 2024/02/08 15:20:31 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

static void	file_append(std::ofstream& file, std::string& buffer, size_t& len)
{
	file << buffer;
	buffer = "";
	len = 0;
}

bool	file_replace(std::string filename, std::string src, std::string dest)
{
	std::ifstream	file_from; 
	std::ofstream	file_to; 
	std::string		buffer = "";
	size_t			len = 0;
	char			c;

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
	
	while (file_from.get(c))
	{
		if (c != src[len])
			file_append(file_to, buffer, len);
		buffer += c;
		len++;
		if (c == src[len - 1] && len == src.size())
		{
			buffer = dest;
			file_append(file_to, buffer, len);
		}
	}
	file_to << buffer;
	file_from.close();
	file_to.close();
	return (true);
}
