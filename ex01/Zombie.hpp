/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:32:25 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 09:56:54 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);		//Constructor
		~Zombie(void);		//Destructor

		Zombie(std::string name);
		void	announce(void) const;
		void	setName(std::string new_name);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
