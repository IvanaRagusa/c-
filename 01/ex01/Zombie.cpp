/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:57:06 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/23 19:57:14 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() : name("zombie") {}

Zombie::Zombie(std::string name) : name(name) {}

void	Zombie::set_name(std::string newname)
{
	this->name = newname;
}

void	Zombie::announce ()
{
	std::string ann = ": BraiiiiiiinnnzzzZ...";
	std::cout << this->name << ann << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destryed" << std::endl;
}