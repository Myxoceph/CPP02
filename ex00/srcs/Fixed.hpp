/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:29:56 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/15 16:34:58 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int fracBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		

};

#endif