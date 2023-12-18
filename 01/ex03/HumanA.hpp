/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:00:56 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/26 19:00:58 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

# include "Weapon.hpp"

class HumanA {
    private: 
        std::string name;
        Weapon &A;
    public:
    void attack();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
};

#endif
