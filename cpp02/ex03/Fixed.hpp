/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:59:02 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 21:24:00 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &other);
		Fixed &operator = (const Fixed &other);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		bool operator >(const Fixed &other) const;
		bool operator <(const Fixed &other) const;
		bool operator >=(const Fixed &other) const;
		bool operator <=(const Fixed &other) const;
		bool operator ==(const Fixed &other) const;
		bool operator !=(const Fixed &other) const;

		Fixed operator +(const Fixed &other) const;
		Fixed operator -(const Fixed &other) const;
		Fixed operator *(const Fixed &other) const;
		Fixed operator /(const Fixed &other) const;

		Fixed operator ++(void);
		Fixed operator ++(int);
		Fixed operator --(void);
		Fixed operator --(int);
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);

# endif
