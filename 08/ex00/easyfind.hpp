#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int num)
{
    typename T::iterator i = find(container.begin(), container.end(), num);
    if (i == container.end())
        throw std::runtime_error("element not found");
    else
        return (i);
}
