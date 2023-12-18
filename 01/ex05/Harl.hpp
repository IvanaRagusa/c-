/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:36:41 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/27 16:36:44 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__
# include <iostream>
# include <string>

class Harl 
{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

#endif