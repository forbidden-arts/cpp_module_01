/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:52:01 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/05 13:15:52 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_zombie("Stack Zombie");
	Zombie	*heap_zombie = newZombie("Heap Zombie");

	randomChump("Chump Zombie");
	delete heap_zombie;
	return (0);
}
