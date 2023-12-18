#pragma once

# include <stdlib.h>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
    private:
    T *_data;
    unsigned int _size;

    public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array<T> & operator=(const Array<T>& other);
    Array(const Array<T>& other);
    T& operator[](unsigned int n);
    unsigned int size();
};

#include "Array.tpp"