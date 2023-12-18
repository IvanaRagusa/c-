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
#include <fstream>
#include <string>

int main (int argc, char **argv)
{
    if (argc != 4)
        std::cout << "e ja', metti 3 argomenti: un file, parola da sostituire e parola sostitutiva" << std::endl;
    else
    {
        std::string oldfilename = argv[1];
        /*creo gli oggetti fstream per leggere e scrivere file (ifstream input e ofstream output)*/
        std::ifstream oldfile(oldfilename);
        std::ofstream newfile(oldfilename.append(".replace"));

        if (oldfile.is_open() && newfile.is_open())
        {
            std::string line;
            std::string newline;
            std::string oldword = argv[2];
            std::string newword = argv[3];
            size_t pos = 0;

            while (std::getline(oldfile, line))
            {
                pos = line.find(oldword);
                if (pos == std::string::npos)
                    newfile << line << std::endl;
                else
                {
                    newline.clear();
                    while (pos != std::string::npos)
                    {                        
                        newline.append(line, 0, pos);
                        newline.append(newword);
                        line.erase(0, pos + oldword.length());
                        pos = line.find(oldword);                       
                    }
                    newline.append(line);
                    newfile << newline << std::endl;
                }
            }
            oldfile.close();
            newfile.close();        
        }
        else
            std::cout << "maro', pero' inserisci un file valido o che esiste, che qua gia' ci brucia la fronte." << std::endl;
    }
}
