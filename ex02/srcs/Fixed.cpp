/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:29:59 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 14:20:59 by abakirca         ###   ########.fr       */
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

Fixed::Fixed(const int x)
{
	std::cout << GREEN"Int constructor called."RESET << std::endl;
	this->value = x << this->fracBits;
}

Fixed::Fixed(const float x)
{
	std::cout << GREEN"Float constructor called."RESET << std::endl;
	this->value = roundf(x * (1 << this->fracBits));
}

int Fixed::toInt( void ) const
{
	return (roundf(this->value / (1 << this->fracBits)));
}

float Fixed::toFloat( void ) const
{
	return (float(this->value / (float)(1 << this->fracBits)));
}

std::ostream &operator<<(std::ostream &str, const Fixed &opCopy)
{
    str << opCopy.toFloat();
    return (str);
}

Fixed Fixed::operator+(const Fixed &op) const
{
	return (Fixed(this->toFloat() + op.toFloat()));
}

Fixed Fixed::operator-(const Fixed &op) const
{
	return (Fixed(this->toFloat() - op.toFloat()));
}

Fixed Fixed::operator*(const Fixed &op) const
{
	return (Fixed(this->toFloat() * op.toFloat()));
}

Fixed Fixed::operator/(const Fixed &op) const
{
	return (Fixed(this->toFloat() / op.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->value--;
	return (tmp);
}

bool Fixed::operator>(const Fixed &op) const
{
	return (this->toFloat() > op.toFloat());
}

bool Fixed::operator<(const Fixed &op) const
{
	return (this->toFloat() < op.toFloat());
}

bool Fixed::operator>=(const Fixed &op) const
{
	return (this->toFloat() >= op.toFloat());
}

bool Fixed::operator<=(const Fixed &op) const
{
	return (this->toFloat() <= op.toFloat());
}

bool Fixed::operator==(const Fixed &op) const
{
	return (this->toFloat() == op.toFloat());
}

bool Fixed::operator!=(const Fixed &op) const
{
	return (this->toFloat() != op.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
