/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:29:59 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/16 15:18:33 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << GREEN"Default constructor called"RESET << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << GREEN"Destructor called"RESET << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
	std::cout << GREEN"Copy constructor called"RESET << std::endl;
	this->value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << GREEN"Copy assignment operator called"RESET << std::endl;
	this->value = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << GREEN"getRawBits member function called"RESET << std::endl;
    return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << GREEN"setRawBits member function called"RESET << std::endl;
    this->value = raw;
}
