/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  DiamondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:37 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/07 18:11:41 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "\033[1;35mDiamondTrap Constructor called!\033[0m" << std::endl;
    this->_name = "Diamond";
    ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_Hit = 100;
	ScavTrap::_Energy = 50;
	FragTrap::_Attack_demage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "\033[1;35mDiamondTrap Constructor called!\033[0m" << std::endl;
    
    ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_Hit = 100;
	ScavTrap::_Energy = 50;
	FragTrap::_Attack_demage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[1;42m" << "Diamond Copy Constructor called!" << "\033[0m" << std::endl;
	if (this != &diamond)
		*this = diamond;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond)
{
	if(this != &diamond)
	{
		this->_Hit = diamond._Hit;
		this->_Attack_demage = diamond._Attack_demage;
		this->_Energy = diamond._Energy;
		this->_name = diamond._name;
	}
	return(*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "\033[1;36mHere both my personalities: Clap - " << ClapTrap::_name << ", e Diamond - "<< this->_name << "\033[0m" << std::endl;
}

// void DiamondTrap::printstatus()
// {
//     std::cout << "\033[1;32mHit points (FragTrap): " << this->_Hit 
//               << "\nEnergy points (ScavTrap): " << this->_Energy
//               << "\nAttack damage (FragTrap): " << this->_Attack_demage
//               << "\033[0m" << std::endl;
// }

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[1;31m" << _name << " Diamond e' schiattato, unlucky.\033[0m" << std::endl;
}
