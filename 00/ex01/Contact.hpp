/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:16:30 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/06 14:16:32 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <cstdlib>
# include <iostream>
#include <sstream>

class Contact
{
    private:
    int         index;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string dark_secret;
        
    public:
    static const int counter = 8;
    void set_cont(std::string first_name, 
                    std::string last_name,
                    std::string nick_name, 
                    std::string phone_number,
                    std::string dark_secret,
                    int index);
    void print_info(std::string info);
    void print_contact();
    int  ft_empty();
    std::string ft_substr(std::string str);
};

#endif

