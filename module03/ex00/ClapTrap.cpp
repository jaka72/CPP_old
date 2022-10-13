/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaka <jaka@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 13:46:41 by jaka          #+#    #+#                 */
/*   Updated: 2022/10/13 14:27:23 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() // :	_name("Default"), _hit_pts(10), _energy_pts(10), _attack_damage(0)
{
	std::cout << "Default constructor ClapTrap\n";
	_name = "Default";
	_hit_pts = 10;
	_energy_pts = 10;
	_attack_damage = 0;
}


// Parameterized constructor
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_pts = 10;
	_energy_pts = 10;
	_attack_damage = 0;
	std::cout << "Constructor ClapTrap (" << name << ")\n"; 
}


// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor ClapTrap\n"; 
	*this = copy;
}


ClapTrap &ClapTrap::operator= (const ClapTrap &orig)
{
	std::cout << "Overload operator= ClapTrap (" << orig._name << ")\n";
	if (this == &orig)
		return (*this);

	this->_name = orig._name;
	this->_hit_pts = orig._hit_pts;
	this->_energy_pts = orig._energy_pts;
	this->_attack_damage = orig._attack_damage;
	return (*this);
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap (" << _name << ")\n"; 
}


// Public member functions
void	ClapTrap::attack(const std::string &target)
{
	if (_energy_pts <= 0 || _hit_pts <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack, because has no" 
				" points left.\n"; 
		return ;
	}
	if (_energy_pts > 0)
	{	
		std::cout << "ClapTrap " << _name << " attacks " << target <<
			", causing him " << _attack_damage << " hit points of damage.\n";
		_energy_pts--;
		std::cout << "   (" << _name << " now has "<<  _energy_pts <<
			" energy points left)\n\n";
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes damage of "
		<< amount << " hit points.\n";
	_hit_pts -= amount;
	if (_hit_pts > 0)
		std::cout << "   (Now has " << _hit_pts << " hit points, "
				<< _energy_pts << " energy points.)\n\n";
	else
	{
		_hit_pts = 0;
		std::cout << "   (Now has zero hit points and died.)\n\n";
	}
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts <= 0)
	{
		std::cout << _name << " can't be repaired, because he has 0 energy" 
			" points.\n"; 
		return ;
	}
	if (_hit_pts <= 0)
	{
		std::cout << _name << " can't be repaired, because he is dead." 
			" points left\n"; 
		return ;
	}
	_hit_pts += amount;
	_energy_pts--;
	std::cout << _name << " repaires himself by amount " 
		<< amount << "!\n";
	std::cout << "   (Now has " << _hit_pts << " hit points, " << _energy_pts << " energy points.)\n\n";
}
