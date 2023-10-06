/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:37:25 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 11:07:44 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << std::endl << "Harl showed up. He looks pissed." << std::endl << std::endl;
}

Harl::~Harl(void)
{
	std::cout << std::endl << "Harl is off to complain somewhere else." << std::endl << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]   ";
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    ";
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working here "
		<< "last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]   ";
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void    Harl::complain( std:: string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
