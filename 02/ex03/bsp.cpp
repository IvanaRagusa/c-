/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:55:33 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:35 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

bool checkpoint(Point const a, Point const b, Point const c, Point const p)
{
	if (a == p || b == p || c == p)
		return (true);
    if (((p.get_x() - b.get_x()) * (a.get_y() - b.get_y()) == (a.get_x() - b.get_x()) * ((p.get_y() - b.get_y()))))
		return (true);
    if (((p.get_x() - b.get_x()) * (a.get_y() - b.get_y()) == (c.get_x() - b.get_x()) * ((p.get_y() - b.get_y()))))
		return (true);
    if (((p.get_x() - c.get_x()) * (a.get_y() - c.get_y()) == (a.get_x() - c.get_x()) * ((p.get_y() - c.get_y()))))
		return (true);
	return (false);
}

Fixed Area(Point const a, Point const b, Point const c)
{
	Fixed A = a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y());
	if (A < 0)
		A = A * -1;
	return (A);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
  if (a == b || b == c || a == c)
  {
	  std::cout << "WAJONO, metti punti differenti, acussi' non si puo' fare il triangolo!" << std::endl;
			return (false);
  }
  if (checkpoint(a, b, c, point) == true)
  {
		std::cout << "Wajo', il punto e' sul perimetro, per me e' dentro, ma il subject dice che e' fuori quindi:" << std::endl;
		return (false);
  }
	Fixed A_tot = Area(a, b, c);
	Fixed A_1 = Area(a, b, point);
	Fixed A_2 = Area(a, point, c);
	Fixed A_3 = Area(point, b, c);
	if (A_tot == (A_1 + A_2 + A_3))	
		return (true);
	return(false);
}