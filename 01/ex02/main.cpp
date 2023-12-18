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
#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout << std::endl
              << "\033[33mthe string is: 'HI THIS IS BRAIN'\033[36m" << std::endl
              << std::endl
              << "str address is: " << &str << std::endl
              << std::endl
              << "\033[32mstringPTR address is: " << stringPTR << "\033[36m" << std::endl
               << std::endl
              << "stringREF address is: " << &stringREF << std::endl
              << std::endl;
    return 0;
}