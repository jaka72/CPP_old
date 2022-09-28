/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaka <jaka@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 12:06:27 by jaka          #+#    #+#                 */
/*   Updated: 2022/09/28 15:42:07 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	 _name;
		Weapon		&_wp;		// CAN BE A REFERENCE BECAUSE IT GETS THE Weapon ARG
//		Weapon		*_wp;		// CANNOT BE A POINTER

	public:

		HumanA(std::string name, Weapon &wp_orig);

		~HumanA();

		void	attack();
};

#endif
