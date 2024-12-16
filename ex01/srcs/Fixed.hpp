/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:29:56 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/16 16:02:12 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define GREEN "\033[32m"
#define RESET "\033[0m"

class Fixed
{
	private:
		int value;
		static const int fracBits = 8;
	
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat ( void ) const;
		int toInt ( void ) const;
};

std::ostream &operator<<(std::ostream &str, const Fixed &opCopy);

#endif
