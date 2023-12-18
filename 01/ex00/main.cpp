/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:57:51 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/23 19:57:53 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"


int main()
{
    std::string s = "Foo";
    
    Zombie *n = newZombie(s);

    n->announce();

    s = "Fuu";
    
    randomChump(s);
    
    delete n;
    return 0;
}