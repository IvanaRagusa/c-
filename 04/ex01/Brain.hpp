
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
protected:
    std::string _ideas[100];

public:
    Brain();
    Brain(const Brain& Other);
    ~Brain();
    Brain(std::string name);
    Brain& operator=(const Brain& Brain);
    const std::string get_ideas(int i);
    void set_ideas ( const std::string &idea, int i);

};

#endif
