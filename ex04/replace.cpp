/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:54:28 by psalame           #+#    #+#             */
/*   Updated: 2023/12/16 22:20:13 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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

	file_from.open(filename.c_str()); // todo close mb
	file_to.open((filename + ".replace").c_str()); // todo close mb
	if (file_from.is_open() && file_to.is_open())
	{
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
		return (true);
	}
	else
		return (false);
}
