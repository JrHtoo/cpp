/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:42:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 19:48:40 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default")
{
	std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal (std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	_type = other._type;
	std::cout << "AAnimal copy assignment constructor called\n";
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal deconstructor called\n";
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal could make several different sounds\n";
}

std::string AAnimal::getType() const
{
	return (_type);
}
