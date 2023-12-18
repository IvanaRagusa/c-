/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:52:00 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:52:03 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main()
{
        ClapTrap nelly("Nelly");

        nelly.attack("Noia");
        for (int i = 0; i < 10; i++)
                nelly.beRepaired(10);
       nelly.takeDamage(5);
}



