/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:01:21 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:01:25 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), B(weapon) {};

void HumanB::setWeapon(Weapon *weapon)
{
    this->B = weapon;
}

void HumanB::attack()
{
    if (this->B == nullptr)
        std::cout << "Poor " << this->name << " hasn't weapon, so run Jim, RUN!" << std::endl;
    else 
        std::cout << this->name << " attacks with their " << this->B->getType() << std::endl;
}

HumanB::~HumanB() 
{
    std::cout << this->name << " died!" << std::endl;
};