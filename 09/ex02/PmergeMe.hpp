#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <iomanip>

std::string ft_check_error(int argc, char **argv);

template <typename IT>
void insertion_sort(IT left, IT right)
{
    IT now = left + 1;

    while (now != right)
    {
        IT next = now + 1;
        while (now != left && *now < *(now - 1))
        {
            int t = *now;
            *now = *(now - 1);
            *(now - 1) = t;
            now--;
        }
        now = next;
    }
}

template <typename Container, typename IT>
void merge_insertion_sort(Container &arr, IT left, IT right)
{
    if (std::distance(left, right) <= 2)
        insertion_sort(left, right);
    else
    {
        IT mid = left;
        std::advance(mid, std::distance(left, right) / 2);
        merge_insertion_sort(arr, left, mid);
        merge_insertion_sort(arr, mid, right);
        Container gnu(std::distance(left, right));
        std::merge(left, mid, mid, right, gnu.begin());
        std::copy(gnu.begin(), gnu.end(), left);
    }
}

template <typename Container>
void sort_container(Container &container, const std::string &input)
{
    std::stringstream ss(input);
    int value;
    while (ss.good())
    {
        ss >> value;
        container.insert(container.end(), value);
    }
    merge_insertion_sort(container, container.begin(), container.end());
}
