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

/*constructor and destructor*/

Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(const Fixed& fixed)
{
    *this = fixed;
}

Fixed::Fixed(const int raw)
{
    int converted = raw << this->_bits;
    this->setRawBits(converted);
}

Fixed::Fixed(const float raw)
{
    int converted = roundf(raw * pow(2, this->_bits));
    this->setRawBits(converted);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

/*getter and setter*/

int Fixed::getRawBits(void) const
{
   return _raw;
}

void Fixed::setRawBits(const int value)
{
    this->_raw = value;
}

/*converter functions*/

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

/*overloads Fixed::operator*/

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    _raw = fixed.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed& fixed) const
{
    return (this->getRawBits() > fixed.getRawBits() ? true : false);
}

bool Fixed::operator>=(const Fixed& fixed) const
{
    return (this->getRawBits() >= fixed.getRawBits() ? true : false);
} 

bool Fixed::operator<(const Fixed& fixed) const
{
    return (this->getRawBits() < fixed.getRawBits() ? true : false);
}  

bool Fixed::operator<=(const Fixed& fixed) const
{
    return (this->getRawBits() <= fixed.getRawBits() ? true : false);
}

bool Fixed::operator==(const Fixed& fixed) const
{
        return (this->getRawBits() == fixed.getRawBits() ? true : false);
}

bool Fixed::operator!=(const Fixed& fixed) const
{
        return (this->getRawBits() != fixed.getRawBits() ? true : false);
}

/*arithmatics operators*/

Fixed Fixed::operator+(const Fixed& fixed) const
{
    float newraw = (this->getRawBits() + fixed.getRawBits());
    return (Fixed(newraw));
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
    float newraw = (this->getRawBits() - fixed.getRawBits());
    return (Fixed(newraw));
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
    float newraw = (this->toFloat() * fixed.toFloat());
    return (Fixed(newraw));
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
    float newraw = (this->toFloat() / fixed.toFloat());
    return (Fixed(newraw));
}

/*pre increase/decrease operators il valore cambia proma dell'operazione, 
restituisce il riferimento all'oggetto dopo l'incremento o decremento*/

Fixed & Fixed::operator++(void)
{
    ++_raw;
    return (*this);
}
Fixed & Fixed::operator--(void)
{
    --_raw;
    return(*this);
}

/*post increase/decrease operators, il valore cambia dopo l'operazione
restituiamo il valore originale prima dell'incremento e mettiamo un int fittizio per distinguerlo dal post*/ 
    
Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    ++_raw;
    return(old);
}
Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    --_raw;
    return(old);
}

/*min max, una funzione statica può essere chiamata direttamente sulla classe senza dover creare 
un'istanza dell'oggetto, Le funzioni statiche possono condividere e modificare i dati statici della classe,
che vengono mantenuti nello stesso stato per tutti gli oggetti della classe, Le funzioni statiche non possono 
essere sovrascritte nelle classi derivate o nelle sottoclassi*/ 

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}
const Fixed&  Fixed::min(Fixed const &a, const Fixed &b)
{
        return (a < b ? a : b);
}
Fixed&   Fixed::max(Fixed &a, Fixed &b)
{
        return (a > b ? a : b);
}
const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}