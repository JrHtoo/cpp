/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:59:11 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 12:54:31 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_number(0)
{
}

Fixed::Fixed(const int number)
{
	_fixed_point_number = number << _fractional_bits;
}

Fixed::Fixed(const float number)
{
	_fixed_point_number = static_cast<int>(number * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (_fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point_number = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixed_point_number) / (1 << _fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (_fixed_point_number >> _fractional_bits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);	
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);	
}

bool Fixed::operator>(const Fixed &other) const
{
	return (_fixed_point_number > other._fixed_point_number);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_fixed_point_number < other._fixed_point_number);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_fixed_point_number >= other._fixed_point_number);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_fixed_point_number <= other._fixed_point_number);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_fixed_point_number == other._fixed_point_number);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_fixed_point_number != other._fixed_point_number);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed Fixed::operator++(void)
{
	_fixed_point_number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	_fixed_point_number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}
