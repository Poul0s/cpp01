/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:54:28 by psalame           #+#    #+#             */
/*   Updated: 2024/03/04 15:51:17 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

static std::string	readInStream(std::ifstream &stream)
{
	std::string	buffer;
	std::string	res;

	while (stream.good())
	{
		std::getline(stream, buffer);
		res += buffer;
		if (!stream.eof())
			res += "\n";
	}
	return (res);
}

bool	file_replace(std::string filename, std::string src, std::string dest)
{
	if (src.size() == 0)
		throw std::invalid_argument("\"src\" argument must not be empty.");

	std::ifstream	file_from;
	std::ofstream	file_to;
	std::string		str;
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

	str = readInStream(file_from);
	pos = 0;
	do
	{
		pos = str.find(src, pos);
		if (pos != std::string::npos)
		{
			str.erase(pos, src.size());
			str.insert(pos, dest);
			pos += dest.size();
		}
	} while (pos != std::string::npos);

	file_to << str;
	file_from.close();
	file_to.close();
	return (true);
}
