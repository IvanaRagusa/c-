#pragma once 

#include <iostream>
#include <stdlib.h>
#include <string>

class Warlock
{
    private:

    std::string _name;
    std::string _title;
    Warlock();
    Warlock(const Warlock &);
    Warlock & operator=(const Warlock &);

    public:
    ~Warlock();
    Warlock(const std::string &name, const std::string &title);
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    void introduce() const;
};