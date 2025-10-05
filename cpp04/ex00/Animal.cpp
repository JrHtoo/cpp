/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:25:21 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 19:45:25 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal (std::string type) : _type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal copy assignment constructor called\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called\n";
}

void Animal::makeSound() const
{
	std::cout << "Animal could make several different sounds\n";
}

std::string Animal::getType() const
{
	return (_type);
}

