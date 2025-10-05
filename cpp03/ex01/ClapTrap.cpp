/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:10 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 18:08:00 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hit_points(other._hit_points),
	_energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;		
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._energy_points;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if(this->_hit_points == 0)
		std::cout << this->_name << " is already dead and unable to attack someone" << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hit_points << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "There's no enough energy to attack." << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "No damage has been made" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
		std::cout << this->_name << " is already dead and no need to attack anymore." << std::endl;
	else
	{
		std::cout << this->_name << " took " << amount << " points of damage." << std::endl;
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
	} 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << this->_name << " is already dead and can not be rapaired." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " got " << amount << " points of hit points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
	else
		std::cout << "Not enough energy points for being repaired" << std::endl;
}

unsigned int ClapTrap::get_hit_points() const
{
	return (this->_hit_points);
}

void ClapTrap::set_hit_points(unsigned int number)
{
	this->_hit_points = number;
}

unsigned int ClapTrap::get_energy_points() const
{
	return (this->_energy_points);
}

void ClapTrap::set_energy_points(unsigned int number)
{
	this->_energy_points = number;
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

void ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

unsigned int ClapTrap::get_attack_damage() const
{
	return (this->_attack_damage);
}

void ClapTrap::set_attack_damage(unsigned int number)
{
	this->_attack_damage = number;
}
