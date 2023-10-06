/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:58:33 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 10:03:09 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "Combatant A " << name << " spawns with "
		<< weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Combatant A " << this->_name << " died!" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with a " << this->_weapon.getType()
		<< std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
