# include "easyfind.hpp"
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>


int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
    try {
       std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << "Element " << *it << " found in pos: " << it - v.begin() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

/*OUTOUT

*/