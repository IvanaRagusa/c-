/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:01:31 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:01:33 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

# include "Weapon.hpp"

class HumanB {
    private: 
        std::string name;
        Weapon *B = nullptr;
    public:
    void attack();
    HumanB(std::string name, Weapon *weapon);
    HumanB(std::string name);
    void setWeapon(Weapon *weapon);
    ~HumanB();
};

#endif

