/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:26:20 by psalame           #+#    #+#             */
/*   Updated: 2023/12/16 23:27:58 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define ORIGINAL "Lorem ipsum dolor sit amet."
#define TEST_1 "Loren ipsun dolor sit anet."
#define TEST_2 "Lorem\nipsum\ndolor\nsit\namet."
#define TEST_3 "Lorem ipsum dolor assis amet."
#define TEST_4 "Lorem ipsum dolor sit amamet."
#define TEST_5 "Lorem ipsum dolor sit amet!"

bool	file_replace(std::string filename, std::string src, std::string dest);

static bool	replace_file_content(std::string newContent)
{
	std::ofstream	file;

	file.open("__test", std::ofstream::trunc);
	if (!file.is_open())
		return (false);
	file << newContent;
	return (true);
}

static bool	get_file_content(std::string& res)
{
	std::ifstream	file;
	char			c;

	file.open("__test.replace");

	if (!file.is_open())
		return (false);
	res = "";
	while(file.get(c))
	{
		res += c;
	}
	return (true);
}

static void	test(std::string test_descriptor, std::string test_content, std::string replace_src, std::string replace_dest)
{
	std::cout << test_descriptor << " : ";

	
	if (!replace_file_content(test_content))
	{
		std::cout << "ERROR" << std::endl;
		std::cerr << "Cannot write test file" << std::endl;
		return;
	}

	if (!file_replace("__test", replace_src, replace_dest))
	{
		std::cout << "ERROR" << std::endl;
		std::cerr << "Cannot read/write test file" << std::endl;
		return;
	}

	std::string res;
	if (!get_file_content(res))
	{
		std::cout << "ERROR" << std::endl;
		std::cerr << "Cannot read test result file" << std::endl;
		return;
	}

	if (res == ORIGINAL)
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO : " << res << " != " << ORIGINAL << std::endl;
}

int	main(void)
{
	test("Test for replacing one char", TEST_1, "n", "m");
	test("Test for replacing newline", TEST_2, "\n", " ");
	test("Test for replacing whole word", TEST_3, "assis", "sit");
	test("Test for replacing word with repetition of letter before word", TEST_4, "amet", "et");
	test("Test for replacing last char of file", TEST_5, "!", ".");
}
