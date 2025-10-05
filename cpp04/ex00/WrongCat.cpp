/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:27:05 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 19:46:54 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat (std::string type) : WrongAnimal(type)
{
	_type = type;
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	std::cout << "WrongCat copy assignment constructor called\n";
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Miau Miau Miau\n";
}
