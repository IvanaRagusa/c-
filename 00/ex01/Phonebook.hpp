/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:14:06 by iragusa           #+#    #+#             */
/*   Updated: 2023/08/06 14:14:08 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <cstdlib>
# include <iostream>
# include <cstring>
# include "Contact.hpp"

class Phonebook
{
    private:
    Contact cont[8];
    int counter;
        
    public:
    Phonebook ();
    void main_phonebook();
    std::string get_input (std::string str_instruction);
    void counter_increase();
    void add_contact();
    void search_contact();
    void print_list();
    int find_index(char c);
};

#endif

