/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:30:01 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 14:24:32 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Fixed c(42.42f);
	Fixed d(21.42f);
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "c + d : " << c + d << std::endl;
	std::cout << "c - d : " << c - d << std::endl;
	std::cout << "c * d : " << c * d << std::endl;
	std::cout << "c / d : " << c / d << std::endl;
	std::cout << "c > d : " << (c > d) << std::endl;
	std::cout << "c < d : " << (c < d) << std::endl;
	std::cout << "c >= d : " << (c >= d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "c == d : " << (c == d) << std::endl;
	std::cout << "c != d : " << (c != d) << std::endl;
	std::cout << "c and d max : " << Fixed::max(c, d) << std::endl;
	std::cout << "c and d min : " << Fixed::min(c, d) << std::endl;
	
	return 0;
}
