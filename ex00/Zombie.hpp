/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:46:53 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/05 12:43:10 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		const std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
