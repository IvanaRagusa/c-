/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:55:33 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:35 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

/*constructor and destructor*/

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point& point) : _x(point._x), _y(point._y) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point & Point::operator=(const Point& point)
{
    if (this != &point)
    {
        *this = point;
    }
    return (*this);
}

bool    Point::operator==( const Point &point ) const
{
    if (this->_x == point._x && this->get_y() == point.get_y())
        return (true);
    return(false);
}


Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed const Point::get_x( void ) const
{
        return (this->_x);
}

Fixed const Point::get_y( void ) const
{
        return (this->_y);
}
