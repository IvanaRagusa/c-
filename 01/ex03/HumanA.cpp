/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:01:03 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:01:09 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), A(weapon) {};

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->A.getType() << std::endl;
}

HumanA::~HumanA() 
{
    std::cout << this->name << " died!" << std::endl;
};