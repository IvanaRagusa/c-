#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <climits>

class Span 
{
    private:
    unsigned int _N;
    std::vector<int> _v;

    public:
    Span(unsigned int N);
    ~Span();
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    
};