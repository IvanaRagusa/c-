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

#include "FragTrap.hpp"

int main() {

    std::cout << "\n\033[1;37mClap calls\n\033[0m\n" << std::endl ;

    ClapTrap clap("Fratm");
    clap.attack("i frati Frag ingiustamente attaccati");
    clap.takeDamage(10);
    clap.beRepaired(5);

    std::cout << std::endl << "\033[1;37mFrag calls\n" << std::endl;

    FragTrap Frag("Sorm");
    Frag.attack("i frati Clap ingiustamente attaccati");
    Frag.highFivesGuys();

    return 0;
}

