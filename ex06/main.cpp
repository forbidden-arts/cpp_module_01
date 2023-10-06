/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:37:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 11:11:47 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv ) {

	if (argc != 2)
		return (std::cout << "Usage: ./harlFilter <level>\n", EXIT_FAILURE);
	std::string input = argv[1];
	Harl	harl;

	harl.complain(input);
	return EXIT_SUCCESS;
}
