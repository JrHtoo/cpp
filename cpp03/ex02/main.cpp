/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 11:02:32 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap FragA("Dude");
	FragA.highFivesGuys();
	FragA.attack("Pigeon");
	FragA.takeDamage(10);

	FragTrap FragB(FragA);
	FragB.beRepaired(5);
	FragB.beRepaired(1);
	FragB.highFivesGuys();
	
	FragTrap FragC = FragA;
	FragC.takeDamage(100);
	FragC.takeDamage(100);
	FragC.attack("Perry");
	FragC.highFivesGuys();

	std::cout << "\nFights are over..." << std::endl;
	return (0);
}
