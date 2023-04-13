
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
public:
    Brain();
    Brain(Brain const &other);
    ~Brain();

    std::string ideas[100];
    Brain  &operator=(const Brain &other);
};

#endif