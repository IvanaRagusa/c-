#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack< T, Container>
{
    private:

    public:
    typedef typename Container::iterator iterator;
    typename Container::iterator begin() {return this->c.begin();}
    typename Container::iterator end() {return this->c.end();}
    typedef typename Container::iterator reverse_iterator;
    typename Container::reverse_iterator rbegin() {return this->c.rbegin();}
    typename Container::reverse_iterator rend() {return this->c.rend();}
    
    typedef typename Container::const_iterator const_iterator;
    typename Container::const_iterator cbegin() {return this->c.begin();}
    typename Container::const_iterator cend() {return this->c.end();}
    typedef typename Container::const_reverse_iterator const_reverse_iterator;
    typename Container::const_reverse_iterator crbegin() {return this->c.rbegin();}
    typename Container::const_reverse_iterator crend() {return this->c.rend();}
};  
