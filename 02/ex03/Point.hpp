/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:54:59 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:04 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point();
        ~Point();
        Point(const Point& point);
        Point(const float x, const float y);
        Point & operator=(const Point& point);
        bool operator==( const Point &point ) const;
        Fixed const get_x() const;
        Fixed const get_y() const;

};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
