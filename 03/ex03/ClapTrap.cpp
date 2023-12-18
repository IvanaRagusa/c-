/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:55:33 by iragusa           #+#    #+#             */
/*   Updated: 2023/09/01 17:55:35 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

/*constructors and destructor*/

ClapTrap::ClapTrap() : _name("Clap"), _Hit(10), _Energy(10), _Attack_demage(0) 
{
	std::cout << "\033[1;34mClaptrap constructor " << this->_name << " is born and ready to kick your ass!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit(10), _Energy(10), _Attack_demage(0) 
{
	std::cout << "\033[1;35mClaptrap constructor " << this->_name << " is born and ready to kick your ass!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap)
{
	if (this != &ClapTrap)
		this->_name = ClapTrap._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
   std::cout << "\033[1;31m" << this->_name << " clap e' muort, unlucky.\033[0m" << std::endl;
}

/*funzioni*/

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energy > 0)
	{	
		this->_Energy--;
		std::cout << "\033[1;33mClapTrap " << this->_name << " attacks " << target 
		    	  << ", causing " << this->_Attack_demage << " of damage!\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;33mClapTrap " << this->_name << " can't attack, is dead on his feet!\033[0m" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > this->_Hit)
		this->_Hit = 0;
	else
		this->_Hit -= amount;
	std::cout << "\033[1;31mClapTrap " << this->_name << " lost " << amount 
		      << " hit points, he has a bone to pick with someone...\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0)
	{	
		this->_Energy--;
		this->_Hit += amount;
		std::cout << "\033[1;32mClapTrap " << this->_name << " repair itself and get back "
		    	  << amount << " Hit points! He's saving for a rainy day!\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;32mClapTrap " << this->_name << " can't recover Hit points, no energy, is dead on his feet!\033[0m" << std::endl;
}