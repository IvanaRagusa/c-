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

#include "Harl.hpp"

int main ()
{
    Harl Hey;
    std::cout << "\033[36m";
    std::string level;
    std::cout << std::endl  << "----------------\033[37mINSTRUCTION\033[36m---------------------" << std::endl
                            << "| Type in UPPERCASE a \033[32level choosing between: \033[36m   |" << std::endl
                            << "| \033[35mDEBUG\033[36m                                         |" << std::endl
                            << "| \033[33mINFO\033[36m                                          |" << std::endl
                            << "| \033[37mWARNING\033[36m                                       |" << std::endl
                            << "| \033[32mERROR\033[36m                                         |" << std::endl
                            << "| \033[30mEXIT\033[36m to exit                                  |"<< std::endl
                            << "| \033[31mAny other command is not allowed\033[36m              |" << std::endl
                            << "----------------------------------------------------------------" << std::endl;
    while (!std::getline(std::cin, level).eof())
    {
        if (!level.compare("EXIT"))
        {
            if (level.empty( ))
                std::cout << "nice try bukkin" << std::endl;
            std::cout << "Bye Bye.." << std::endl;
            break;
        }
        Hey.complain(level);        
    }
    return(0);
}
