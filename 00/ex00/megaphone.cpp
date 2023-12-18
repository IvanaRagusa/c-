/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:16:21 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/05 16:16:23 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main (int argc, char **argv)
{
    std::string up_str;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";     
    for (int i = 1; i < argc; i++)
    {
        std::string up_str = argv[i];
        size_t len = up_str.length();
        for (size_t j = 0; j < len; j++)
            std::cout << (char)toupper(up_str[j]);
        std::cout << ' ';
    }        
    std::cout << std::endl;
    return (0);
}