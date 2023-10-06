/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:46:53 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 09:57:07 by dpalmer          ###   ########.fr       */
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
		Zombie(void);		//Constructor
		~Zombie(void);		//Destructor

		Zombie(std::string name);
		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
