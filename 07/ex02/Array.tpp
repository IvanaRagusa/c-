#pragma once

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n) {}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T>& other) {
        if(this != &other) {
            delete[] _data;
            _size = other._size;
            _data = new T[other._size];
            for(unsigned int i = 0; i < _size; ++i)
                _data[i] = other._data[i];
        }
        return *this;
    }

template <typename T>
Array<T>::Array(const Array<T>& other)
{
    _data = new T[other._size];
    for(unsigned int i = 0; i < other._size; ++i) 
    {
        _data[i] = other._data[i];
     _size = other._size;
     }
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
    if(index >= _size)
        throw std::out_of_range("Index out of bounds, sorry!!");
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size()  {return _size;}

template <typename T>
Array<T>::~Array(void) {
	if (_size)
		delete[ ] _data;
}
