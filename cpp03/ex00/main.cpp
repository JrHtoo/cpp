/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 10:56:07 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	jack("Jack");
	
	jack.set_attack_damage(3);
	std::cout << "\n---------- ClapTrap " << jack.get_name() << " ----------" << std::endl;
	std::cout << "Hitpoints: " << jack.get_hit_points() << " ";
	std::cout << "Energy: " << jack.get_energy_points() << " ";
	std::cout << "Attack Damage: " << jack.get_attack_damage() << " ";
	std::cout << " Status: Active" << std::endl;
	std::cout << "\nStart attacking...\n" << std::endl;

	jack.attack("The Giant");
	jack.attack("The Goose");
	jack.takeDamage(3);
	jack.takeDamage(4);
	jack.beRepaired(100);
	jack.attack("The Princess");

	std::cout << "\nFights are over..." << std::endl;
}
