#pragma once

# include <stdlib.h>
# include <iostream>

template <typename E>
void print_el(E el)
{
    std::cout << "elemento array : " << el << std::endl;
}
template <typename T, typename L, typename F>
void iter(T& ptr, L len, F fun)
{
    if (!ptr)
        return ;
    for (L i = 0; i < len; i++)
        fun(ptr[i]);
};
