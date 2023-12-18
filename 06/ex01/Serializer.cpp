
#include "Serializer.hpp"
#include <iostream>

/*Serializer class*/

Serializer::Serializer() { };
Serializer::~Serializer() { };

uintptr_t Serializer::serialize(Data* ptr) 
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t uptr)
{
    return (reinterpret_cast<Data*>(uptr));
}

Serializer& Serializer::operator=(const Serializer& uptr) 
{
	(void)uptr;
	return (*this);

}