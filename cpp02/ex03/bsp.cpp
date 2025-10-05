/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:30:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 21:54:18 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(const Point &a, const Point &b, const Point &c)
{
	Fixed area = (a.get_x() * (b.get_y() - c.get_y()) +
					b.get_x() * (c.get_y() - a.get_y()) +
					c.get_x() * (a.get_y() - b.get_y())) / Fixed(2);
	
	if (area.toFloat() < 0)
		return (area * Fixed(-1));
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = area(a, b, c);
	Fixed areaABP = area(a, b, point);
	Fixed areaACP = area(a, c, point);
	Fixed areaBCP = area(b, c, point);

	if (areaABP == 0 || areaACP == 0 || areaBCP == 0)
		return (false);
	return (areaABP + areaACP + areaBCP == areaABC);
}