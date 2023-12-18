/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:41 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/05 13:05:45 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main ( void ) {
    if ( bsp( Point(1.22, 3.82), Point(2.54, 1.02), Point(6.07, 3.47), Point(2.88, 4.36) ) == true ) {
        std::cout << "Point is in inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }
    return 0;
}

/*casi*/
/*
www.geogebra.org/m/TzRpfynr

fuori
Point(1.22, 3.82), Point(2.54, 1.02), Point(6.07, 3.47), Point(2.88, 4.36)
dentro
Point(1.22, 3.82), Point(2.54, 1.02), Point(6.07, 3.47), Point(3.27, 2.28)
sul perimetro
Point(1.22, 3.82), Point(2.54, 1.02), Point(6.07, 3.47), Point(1.22, 3.82)

*/