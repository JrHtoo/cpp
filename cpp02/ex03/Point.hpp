/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:26:37 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 21:42:40 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
	
	public:
		Point();
		Point(const float num1, const float num2);
		Point(const Point &other);
		Point& operator=(const Point &other);
		~Point();

		Fixed	get_x() const;
		Fixed	get_y() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

# endif
