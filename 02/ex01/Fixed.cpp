/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:55:33 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:35 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _raw = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
   return _raw;
}

void Fixed::setRawBits(const int value)
{
    this->_raw = value;
}

Fixed::Fixed(const int raw)
{
    std::cout << "int Constructor called" << std::endl;
    int converted = raw << this->_bits;
    this->setRawBits(converted);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float Constructor called" << std::endl;
    int converted = raw * pow(2, this->_bits);
    this->setRawBits(converted);
}

float   Fixed::toFloat( void ) const
{
    float convert = this->_raw / pow(2, _bits);
    return (convert);
}

int     Fixed::toInt( void ) const
{   
    int convert = this->_raw / pow(2, _bits);
    return (convert);
}     

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}