/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:00:27 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:00:29 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Weapon.hpp"

Weapon::Weapon() : type("Nothing") {};
Weapon::Weapon(std::string Type) : type(Type) {};

const std::string& Weapon::getType()
{
    return (this->type);
}

 void Weapon::setType(std::string newType)
 {
    this->type = newType;
 }

Weapon::~Weapon() {}; 