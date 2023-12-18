/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:17:02 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/06 14:17:04 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook ()
{
	counter = 0;
}

void Phonebook::counter_increase()
{
	if (counter < 7)
			counter++;
	else 
		counter = 0;
}


void Phonebook::print_list()
{
	int	i;
	
	i = 0;
	std::cout << "\033[32m" << "|" << std::setw(10) << std::right << "index"
			  << "|" << std::setw(10) << std::right << "first name"
			  << "|" << std::setw(10) << std::right << "last name"
			  << "|" << std::setw(10) << std::right << "nickname" <<std::endl;
	std::cout << ("--------------------------------------------") << std::endl << "\033[36m";

	while (i < 8 && !cont[i].ft_empty())
	{
			std::cout << "\033[32m" << "|" << std::setw(10) << std::right << cont[i].ft_substr("index")
			  << "|" << std::setw(10) << std::right << cont[i].ft_substr("first_name")
			  << "|" << std::setw(10) << std::right << cont[i].ft_substr("last_name")
			  << "|" << std::setw(10) << std::right << cont[i].ft_substr("nickname") << std::endl << "\033[36m";
			  i++;
	}

}

std::string Phonebook::get_input (std::string str_instruction)
{
	std::string str_input;
	std::string str = "0123456789";
	int i = 0;
	int flag;

	std::cout << str_instruction << std::endl;
	while (!std::getline(std::cin, str_input).eof())
	{
		if (str_input.empty())
		{
			std::cout << "\033[33mplease insert a valid " << str_instruction << std::endl << "\033[36m";
			continue;
		}
		else if (str_instruction == "phone number:")
		{
			while (str_input[i] != '\0')
			{
				flag = 1;
				if (str.find(str_input[i]) != std::string::npos)
					i++;
				else 
				{
					std::cout << "\033[31monly digits allowed in phone number, try again \033[36m" << std::endl;
					flag = 0;
					break;
				}
			}
			if (flag == 1)
				break;	
		}
		else
			break;
	} 
	return (str_input);
}

int Phonebook::find_index(char c)
{
	int index;

	if (!(c > 48 && c < 58))
	{
		std::cout << "\033[33mchoose a index between 1 and 8 \033[36m" << std::endl;
		return (10);
	}
	index = c - '1';
	if (cont[index].ft_empty())
	{
		std::cout << "\033[35mthis contact is empty, please select an index from the table above or type EXIT to go back to main menu \033[36m" << std::endl;
		return (11);
	}
	return (index);
}

void Phonebook::search_contact()
{
	std::string str_index;
	std::string str = "12345678";
	int ind;

	print_list();
	std::cout << "\033[33mselect an index to display info:\033[36m" << std::endl;
	while (!std::getline(std::cin, str_index).eof())
	{
		if (cont[0].ft_empty())
			std::cout << "\033[35myour phonebook is empty, type EXIT to go back to main menu\033[36m" << std::endl;
		else
			std::cout << "\033[33mselect an index to display info:\033[36m" << std::endl;
		if (str_index == "EXIT")
			break;
		else if (str_index.size() != 1 || (str.find(str_index[0]) == std::string::npos))
			std::cout << " \033[31mchoose an index between 1 and 8 \033[36m" << std::endl;
		else
		{
				ind = find_index(str_index[0]);
				if (ind != 10 && ind != 11)
				{
					cont[ind].print_contact();
					break;
				}
		}		
	}
}

void Phonebook::add_contact()
{
	std::string	first_name;
	std::string last_name;
	std::string	nick_name;
	std::string phone_num;
	std::string dark_secret;

	first_name = get_input ("\033[32mfirst name:\033[36m");
	last_name = get_input ("\033[32mlast name:\033[36m");
	nick_name = get_input ("\033[32mnickname:\033[36m");
	phone_num = get_input ("\033[32mphone number:\033[36m");
	dark_secret = get_input ("\033[32mdarkest secret:\033[36m");
	cont[counter].set_cont(first_name, last_name, nick_name, phone_num, dark_secret, counter);
	std::cout << "\033[35mcontact successfully added with index: \033[36m" << counter + 1 << std::endl;
	counter_increase();
}

void Phonebook::main_phonebook()
{
	std::string command;

	while (!std::getline(std::cin, command).eof())
	{
		if (command == "ADD")
			Phonebook::add_contact();
		else if (command == "SEARCH")
			Phonebook::search_contact();
		else if  (command == "EXIT")
			break;
		else 
			std::cout << std::endl <<"----------------------------\033[37mINSTRUCTION\033[36m-------------------------------" << std::endl
					  << "| Use \033[32mADD\033[36m and follow instruction to add a new contact                |" << std::endl
					  << "| Use \033[35mSEARCH\033[36m to print a list of contact and choose a contact to show |" << std::endl
					  << "| Use \033[33mEXIT\033[36m to exit                                                   |" << std::endl
					  << "| \033[31mAny other command is not allowed\033[36m                                   |" << std::endl
					  << "----------------------------------------------------------------------" << std::endl;
	}
	exit(0);
}