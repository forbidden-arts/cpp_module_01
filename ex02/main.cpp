/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:12:59 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/05 15:20:29 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	// Create string
	std::string str = "HI THIS IS BRAIN";
	// Get pointer
	std::string *stringPTR = &str;
	// Get reference
	std::string &stringREF = str;

	std::cout << "String Addresses: " << std::endl;
	std::cout << "address: " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String Value: " << std::endl;
	std::cout << "literal: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return (0);
}
