/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:37 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/07 18:11:41 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap ()
{
    std::cout << "\033[1;36mFragTrap Constructor called!\033[0m" << std::endl;
    _name = "FragTrap";
    _Hit = 100;
    _Energy = 100;
    _Attack_demage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;35mFragTrap Constructor called!\033[0m" << std::endl;
    _Hit = 100;
    _Energy = 100;
    _Attack_demage = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "\033[1;36m" << _name << " frag asks: 'Ueee schiate il cinque, fratmiiii!!'\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;31m" << _name << " frag e' schiattato, unlucky.\033[0m" << std::endl;
}
