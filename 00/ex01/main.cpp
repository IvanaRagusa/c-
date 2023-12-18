/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:17:14 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/06 14:17:16 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"

int main(void)
{
    Phonebook book;

    std::cout << "\033[36m";
    std::cout << std::endl <<"----------------------------\033[37mINSTRUCTION\033[36m-------------------------------" << std::endl
					  << "| Use \033[32mADD\033[36m and follow instruction to add a new contact                |" << std::endl
					  << "| Use \033[35mSEARCH\033[36m to print a list of contact and choose a contact to show |" << std::endl
					  << "| Use \033[33mEXIT\033[36m to exit                                                   |" << std::endl
					  << "| \033[31mAny other command is not allowed\033[36m                                   |" << std::endl
					  << "----------------------------------------------------------------------" << std::endl;
    book.main_phonebook();
     std::cout << "\033[0m";
}