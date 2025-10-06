/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:46:36 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 11:17:12 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;

	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamonTrap Constructor called" << std::endl;
	
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;

	ClapTrap::set_name(other._name + "_clap_name");
	this->_name = other._name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;

	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	this->_name = other._name;
	ClapTrap::set_name(other._name + "_clap_name");

	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor operator called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::set_name(std::string name)
{
	ClapTrap::set_name(name + "_clap_name");
	this->_name = name;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name : " << this->_name << ", ClapTrap Name : " << ClapTrap::_name << std::endl;
}
