/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:37 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/07 18:11:41 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap ()
{
    std::cout << "\033[1;35mScavTrap Constructor called!\033[0m" << std::endl;
    _name = "ScavTrap";
    _Hit = 100;
    _Energy = 50;
    _Attack_demage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;35mScavTrap Constructor called!\033[0m" << std::endl;
    _Hit = 100;
    _Energy = 50;
    _Attack_demage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "\033[1;36m" << _name << " is now in Gatekeeper mode.\033[0m" << std::endl;
}
