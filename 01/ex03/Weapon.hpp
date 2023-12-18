/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:00:36 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:00:39 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

# include <iostream>

class Weapon {
    private:
    std::string type;

    public:
    const std::string& getType();
    void setType(std::string newType);
    Weapon();
    Weapon(std::string Type);
    ~Weapon();   
};

#endif
