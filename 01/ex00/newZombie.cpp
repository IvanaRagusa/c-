/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:37:37 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/25 19:37:40 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie (std::string name)
{
    Zombie *n;

    try {
        n = new Zombie(name);
    } catch (const std::bad_alloc& e) {
        std::cerr << "Errore nell'allocazione di memoria: " << e.what() << std::endl;
    }
    return(n);
}

