/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:16:52 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/06 14:16:54 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_cont (std::string first_name,	std::string last_name, 
						std::string nick_name, std::string phone_number,
						std::string dark_secret, int index)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->dark_secret = dark_secret;
	this->index = index + 1;
}

void Contact::print_info(std::string info)
{
	if (info == "first name")
		std::cout << "\033[37mfirst name: " << this->first_name << std::endl << "\033[36m";
	if (info == "last name")
		std::cout << "\033[37mlast name: " << this->last_name << std::endl << "\033[36m";
	if (info == "nickname")
		std::cout << "\033[37mnickname: " << this->nick_name << std::endl << "\033[36m";
}

void Contact::print_contact()
{
	std::cout << "\033[37mfirst name: " << this->first_name << std::endl 
			  << "last name: " << this->last_name << std::endl
			  << "nickname: " << this->nick_name << std::endl
			  << "phone number: " << this->phone_number << std::endl
			  << "darkest secret: " << this->dark_secret << std::endl << "\033[36m";
}

int  Contact::ft_empty()
{
	if (this->first_name.empty())
		return(1);
	else
		return(0);
}

std::string itoa(int number) {
    std::ostringstream oss;
    oss << number;
    return oss.str();
}

std::string Contact::ft_substr(std::string str)
{
	if (str == "index")
		return(itoa(this->index));
	if (str == "first_name")
	{
		if (this->first_name.length() > 10)
			return(this->first_name.substr(0, 9) + ".");
		else
			return(this->first_name);
	}
	if (str == "last_name")
	{
		if (this->last_name.length() > 10)
			return(this->last_name.substr(0, 9) + ".");
		else
			return(this->last_name);
	}
	if (str == "nickname")
	{
		if (this->nick_name.length() > 10)
			return(this->nick_name.substr(0, 9) + ".");
		else
			return(this->nick_name);
	}
	return (nullptr);
}

