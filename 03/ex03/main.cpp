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

#include "DiamondTrap.hpp"

int main() {

    // std::cout << std::endl << "\033[1;37mFrag calls\n" << std::endl;

    // FragTrap Frag("Sorm");
    // Frag.attack("i frati Diamond ingiustamente attaccati");
    // Frag.highFivesGuys();

    std::cout << "\n\033[1;37mDiamond calls\n\033[0m\n" << std::endl ;

    DiamondTrap Diamond("Fratm");
    Diamond.attack("i frati frag ingiustamente attaccati");
    Diamond.whoAmI();
    // Diamond.printstatus();

    std::cout << "\n\033[1;37mDistructors\n\033[0m\n" << std::endl ;

    return 0;
}

