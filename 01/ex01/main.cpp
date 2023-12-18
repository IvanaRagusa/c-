/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:57:51 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/23 19:57:53 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
    Zombie *Horde;

    Horde = zombieHorde(100, "Pippo");

    for (int i = 0; i < 100; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
    return 0;
}