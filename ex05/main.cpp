/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:37:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/06 10:42:05 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	return (0);
}
