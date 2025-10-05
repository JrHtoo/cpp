/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:21:52 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 21:41:06 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float num1, const float num2) : _x(num1), _y(num2)
{
}

Point::Point(const Point &other) : _x(other.get_x()), _y(other.get_y())
{
}
Point &Point::operator=(const Point &other)
{
	this->_x = other._x;
	this->_y = other._y;
	return *this;
}

Point::~Point()
{
}

Fixed	Point::get_x() const
{
	return _x;
}

Fixed	Point::get_y() const
{
	return _y;
}
