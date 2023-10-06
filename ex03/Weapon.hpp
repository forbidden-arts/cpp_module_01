/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:52:45 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 09:56:42 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
