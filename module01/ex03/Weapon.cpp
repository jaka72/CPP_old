/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaka <jaka@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 12:13:16 by jaka          #+#    #+#                 */
/*   Updated: 2022/09/28 13:50:08 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon(const std::string &tp)
{
	_type = tp;			// WHICH VARIANT TO USE ??
	// setType(tp);
}


// Destructor
Weapon::~Weapon()   	// DESTRUCTOR
{   }


void Weapon::setType(const std::string &type)
{
	_type = type;
}



// IF A CONST REFERENCE RETURNS, THAT MEANS
// THAT THIS VARIABLE CANT BE CHANGED LATER OUTSIDE.
// SO WHY THIS FUNCTION CANT BE gettype() const  ???
const std::string& Weapon::getType()
{
	std::string& typeREF = _type;
	//std::cout << "     typeREF: " << &typeREF << "\n";
	//std::cout << "       _type: " << &_type   << "\n";
	
	return typeREF;
}
