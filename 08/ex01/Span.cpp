#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _v(0){}

Span::~Span(){}

void Span::addNumber(int num)
{
    if (_v.size() < _N)
        _v.push_back(num);
    else
        throw std::out_of_range("can't push number, span is full!");
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw std::runtime_error("vector has only 1 int or less, no span possible...");
    int mindiff = INT_MAX;
    sort(_v.begin(), _v.end());
    for(int i = 0; i < (int)_v.size() - 1; i++)
    {
        int tmpdiff = (_v[i] - _v[i - 1]);
        mindiff = (tmpdiff < mindiff) ? tmpdiff : mindiff;
    }
    return(mindiff);

}
int Span::longestSpan()
{
    if (_v.size() < 2)
        throw std::runtime_error("vector has only 1 int or less, no span possible...");
    int last = _v.size() - 1;
    sort(_v.begin(), _v.end());
    return (_v[last] - _v[0]);
}
