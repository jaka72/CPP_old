/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaka <jaka@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 12:06:14 by jaka          #+#    #+#                 */
/*   Updated: 2022/09/28 15:39:30 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
	In constructor, which variant to use?
		type = tp;
		// setType(tp);
			AND
		Weapon::Weapon(const std::string &tp)   ----> with & or without & ???
		

	POINTER VS REFERENCE
	Reference must be initialized at the moment of declaration /or/ constructiuon

	THE ANSWER:
	Human A can have -wp as a reference, because it gets the Weapon via args,
	so the private variable &_wp can immediately at construction be initialized
	(which is necessary for the reference).
	But Human B does not get the Weapon via args, so its private member *_wp
	cannot be initialized at the time of construction. So reference cannot be
	used. Better a pointer, because it can wait until later, when setWeapon()
	is called.
*/


int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("plastic yellow club");
		bob.attack();
	}
	std::cout << "\n";
	{
		Weapon hammer = Weapon("big steel hammer");

		HumanB jim("Jim");
		jim.attack();

		jim.setWeapon(hammer);	// IN SUBJECT: WITHOUT ADRES
//		jim.setWeapon(&hammer);
		
		jim.attack();
		hammer.setType("little hammer from Utrecht");
		jim.attack();
	}

	return 0;
}