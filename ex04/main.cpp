/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:09:51 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 10:30:10 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

/* Copies char by char unless i == pos, in which case it outputs the new word
	and advances the index by word length -1 */
int	replace(char **argv, std::string str)
{
	std::ofstream	output;
	int				pos;

	output.open((std::string(argv[1]) + ".replace").c_str());
	if (output.fail())
		return (1);
	for (int i = 0; i < str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			output << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			output << str[i];
	}
	output.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	input;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "Error: usage: replace <file> old new" << std::endl;
		return (1);
	}
	input.open(argv[1]);
	if (input.fail())
	{
		std::cout << "Error: " << argv[1] << " cannot open" << std::endl;
		return (1);
	}
	while(!input.eof() && input >> std::noskipws >> c)
		str += c;
	input.close();
	return (replace(argv, str));
}
