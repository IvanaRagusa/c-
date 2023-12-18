#include "PmergeMe.hpp"

std::string ft_check_error(int argc, char **argv)
{
    std::string inp;
    for (int i = 1; i < argc; i++)
    {
        inp += argv[i];
        if (i < argc - 1)
            inp += " ";
    }
    for (unsigned long i = 0; i < inp.length(); i++)
    {
        if (!(isdigit(inp[i]) || isspace(inp[i])))
        {
            std::cout << "Error:\ninsert only positive int divided by space" << std::endl;
            exit(1);
        }
    }
    return (inp);
}