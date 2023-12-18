#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
# include "Data.hpp"
# include "iostream"

struct Data ;

class Serializer 
{
    private:
        
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer& obj);
        Serializer& operator=(const Serializer& obj);
    
    public:
        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t uprt);
};

#endif
