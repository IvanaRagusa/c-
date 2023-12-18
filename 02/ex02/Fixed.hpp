/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:54:59 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:04 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int _raw;
        const static int _bits = 8;
    
    public:
        /*constructor and desctructor*/

        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed(const int raw);
        Fixed(const float raw);
        
        /*setter and getter*/

        int		getRawBits( void ) const;
		void	setRawBits( int const raw);

        /*converter*/

        float   toFloat( void ) const;
        int     toInt( void ) const;

        /*overload functions*/

        Fixed & operator=(const Fixed& fixed);
        bool    operator>(const Fixed& fixed) const;
        bool    operator>=(const Fixed& fixed) const; 
        bool    operator<(const Fixed& fixed) const;     
        bool    operator<=(const Fixed& fixed) const; 
        bool    operator==(const Fixed& fixed) const; 
        bool    operator!=(const Fixed& fixed) const;

        /*arithmatics operators*/

        Fixed   operator+(const Fixed& fixed) const;
        Fixed   operator-(const Fixed& fixed) const;
        Fixed   operator*(const Fixed& fixed) const;
        Fixed   operator/(const Fixed& fixed) const;

        /*pre increase/decrease operators, restituisce il riferimento all'oggetto dopo l'incremento o decremento*/
        
        Fixed & operator++(void);
        Fixed & operator--(void);
        
        /*post increase/decrease operators, restitudsicono il valore originale prima dell'incremento
        mettiamo un int fittizio per distinguerlo dal post*/ 
        
        Fixed   operator++(int);
        Fixed   operator--(int);

        /*min max, una funzione statica può essere chiamata direttamente sulla classe senza dover creare 
        un'istanza dell'oggetto, Le funzioni statiche possono condividere e modificare i dati statici della classe,
        che vengono mantenuti nello stesso stato per tutti gli oggetti della classe, Le funzioni statiche non possono 
        essere sovrascritte nelle classi derivate o nelle sottoclassi*/ 

        static          Fixed&  min(Fixed &a, Fixed &b);
		static const    Fixed&  min(Fixed const &a, const Fixed &b);
        static          Fixed&   max(Fixed &a, Fixed &b);
        static const    Fixed&  max(Fixed const &a, const Fixed &b);

    };
    std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



#endif
