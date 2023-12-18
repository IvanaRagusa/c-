/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:50:22 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/29 18:50:23 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl() {};

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl
              << "I love having extra bacon for my" << std::endl
              << "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
              << "I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl
              << "I cannot believe adding extra bacon costs more money." << std::endl
              << "You didn’t put enough bacon in my burger!" << std::endl 
              << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl
              << "I think I deserve to have some extra bacon for free." << std::endl
              << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl
              << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level )
{
   void (Harl::*call[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   std::string recall[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   int  i = 0;
   
   while(i < 4)
   {
        if (!level.compare(recall[i]))
            break;
        i++;
   }
   switch (i)
   {
        case 0:
            (this->*call[0])();
        case 1:
            (this->*call[1])();
        case 2:
            (this->*call[2])();
        case 3:
        {
            (this->*call[3])();
                break;
        }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

Harl::~Harl() 
{
    std::cout << "Harl went to sleep..." << std::endl;
};
