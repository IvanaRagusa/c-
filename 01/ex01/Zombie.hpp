/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:57:18 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/23 19:57:23 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

# include <iostream>
# include <iomanip>
# include <ctime>
# include <string>

// ************************************************************************** //
//                               Class                               		  //
// ************************************************************************** //

class Zombie {

private:
	std::string	name;

public:
	void set_name(std::string newname);
	Zombie();
	Zombie(std::string name);
	void announce( void );
	~Zombie();
};

// ************************************************************************** //
//                               Function                             		  //
// ************************************************************************** //

Zombie*		newZombie (std::string name);
void 		randomChump(std::string name);
Zombie* 	zombieHorde( int N, std::string name );

#endif 
