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
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed & operator=(const Fixed& fixed);
        Fixed(const int raw);
        Fixed(const float raw);
        
        int		getRawBits( void ) const;
		void	setRawBits( int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;     
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif
