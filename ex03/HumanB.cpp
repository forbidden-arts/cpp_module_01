/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:59:26 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 10:03:06 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "Combatant B " << name << " spawns" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Combatant B " << this->_name << " died!" << std::endl;
}

void	HumanB::attack(void)
{

	std::cout << this->_name << " attacks with a " << this->_weapon->getType()
		<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
