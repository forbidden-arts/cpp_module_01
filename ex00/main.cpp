/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:52:01 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/05 12:45:43 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_zombie("Stack");
	Zombie	*heap_zombie = newZombie("Heap Zombie");

	randomChump("Chump Zombie");
	delete heap_zombie;
	return (0);
}
